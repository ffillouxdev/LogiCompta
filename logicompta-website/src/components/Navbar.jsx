import React, { useState, useEffect } from "react";

export default function Navbar() {
  const [scrolled, setScrolled] = useState(false);

  useEffect(() => {
    const handleScroll = () => {
      if (window.scrollY > 0) {
        setScrolled(true);
      } else {
        setScrolled(false);
      }
    };

    window.addEventListener("scroll", handleScroll);

    return () => {
      window.removeEventListener("scroll", handleScroll);
    };
  }, [scrolled]);

  const handleNavClick = (targetId) => {
    const targetElement = document.getElementById(targetId);

    if (targetElement) {
      window.scrollTo({
        top: targetElement.offsetTop,
        behavior: "smooth",
      });
    }
  };

  return (
    <>
      <header>
        <nav className={scrolled ? "scrolled" : ""}>
          <ul>
            <li onClick={() => handleNavClick("top")}>ACCUEIL</li>
            <li onClick={() => handleNavClick("A_propos")}>A PROPOS</li>
            <li onClick={() => handleNavClick("Contact")}>CONTACT</li>
          </ul>
        </nav>
      </header>
    </>
  );
}
