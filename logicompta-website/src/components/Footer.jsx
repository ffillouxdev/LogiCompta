import React from "react";

export default function Footer() {
    return(
        <>
            <footer>
                <hr />
                <div className="redirection-links">
                    <ul>
                        <li><a href="#top">Retour en haut</a></li>
                        <li><a href="#Contact">Contact</a></li>
                        <li><a href="#A_propos">A propos</a></li>
                    </ul>
                </div>
                <div className="copyright-rights">
                    <p>
                        © 2024 LogiCompta. Tous droits réservés. | Politique de confidentialité | Conditions d'utilisation
                    </p> 
                </div>
            </footer>
        </>
    )

}