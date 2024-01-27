import React from "react";

export default function OSButton({ logoSrc, altText, osName, version, fileName }) {
    const handleDownload = () => {
        const filePath = `/downloads/${fileName}`;

        const downloadLink = document.createElement("a");
        downloadLink.href = process.env.PUBLIC_URL + filePath;
        downloadLink.download = fileName;

        document.body.appendChild(downloadLink);
        downloadLink.click();

        document.body.removeChild(downloadLink);
    };

    return (
        <button className={`${osName.toLowerCase()} buttonChoice`} onClick={handleDownload}>
            <img src={logoSrc} alt={altText} />
            <div className="text-div">
                <h3>{osName}</h3>
                <p>{`Version-${version}`}</p>
            </div>
        </button>
    );
};
