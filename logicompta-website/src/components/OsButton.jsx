import React from "react";

const OSButton = ({ logoSrc, altText, osName, version }) => (
    <button className={`${osName.toLowerCase()} buttonChoice`}>
        <img src={logoSrc} alt={altText} />
        <div className="text-div">
            <h3>{osName}</h3>
            <p>{`Version-${version}`}</p>
        </div>
    </button>
);

export default OSButton;