import React from "react";

// les img
import logoLogiCompta from "../assets/logo_logiCompta.png";
import logoWindows from "../assets/windowsIcon.png";
import logoLinux from "../assets/linuxIcon.png";
import PenIcon from "../assets/styloIcon.svg";
import UserIcon from "../assets/userIcon.svg";
import PhoneIcon from "../assets/phoneIcon.svg";
import MailIcon from "../assets/envelopeIcon.svg";
import locaIcon from "../assets/locationIcon.svg";

import YtbIcon from "../assets/youtubeIcon.svg";
import FacebookIcon from "../assets/facebookIcon.svg";
import TwitterIcon from "../assets/twitterIcon.svg";
import InstagramIcon from "../assets/instagramIcon.svg";

// les components
import OSButton from "./OsButton";
import FeatureBox from "./FeatureBox";


export default function Main() {
    return (
        <>
            <main>
                <div className="Accueil sectionPage" id="top">
                    <div className="central-div-logiCompta">
                        <h1>LogiCompta</h1>
                        <p>"Simplifiez votre comptabilité en toute efficacité."</p>
                        <img src={logoLogiCompta} id="LogiLogo" alt="logo logiCompta" />
                        <div className="os-choice">
                            <OSButton
                                logoSrc={logoWindows}
                                altText="windows logo"
                                osName="Windows"
                                version="1.0.0"
                            />
                            <OSButton
                                logoSrc={logoLinux}
                                altText="linux logo"
                                osName="Linux"
                                version="1.0.0"
                            />
                        </div>
                    </div>
                    <p className="bottom-text">
                        Découvrez comment notre solution peut simplifier votre gestion financière. Essayez LogiCompta dès aujourd'hui.
                    </p>
                </div>
                <hr />
                <div className="A-propos sectionPage" id="A_propos">
                    <div className="first-container">
                        <h2>A PROPOS DE NOUS</h2>
                        <p>Bienvenue sur LogiCompta, votre partenaire de confiance pour simplifier la gestion comptable de vos dépenses. </p>
                        <p>Notre logiciel est conçu pour répondre aux besoins spécifiques de chacun, de la petite entreprise a la moyenne, offrant une solution complète et conviviale pour optimiser vos opérations financières.</p>
                    </div>
                    <div className="second-container">
                        <FeatureBox
                            iconSrc={PenIcon}
                            altText="penIcon"
                            title="Facile à utiliser"
                            description="Une interface conviviale qui simplifie la saisie des données comptables, même pour ceux qui n'ont pas de compétences approfondies en comptabilité."
                            textColor="var(--about-title-color1)"
                        />
                        <FeatureBox
                            iconSrc={UserIcon}
                            altText="userIcon"
                            title="Type d’utilisateur"
                            description="Que vous soyez un particulier, une startup en croissance ou une PME établie, LogiCompta est l'outil idéal pour prendre en charge votre comptabilité avec efficacité et tranquillité d'esprit."
                            textColor="var(--about-title-color2)"
                        />
                        <FeatureBox
                            iconSrc={YtbIcon}
                            altText="ytbIcon"
                            title="Communication mise à jour"
                            description="Abonnez-vous à notre chaîne pour rester informé des dernières mises à jour, des fonctionnalités émergentes, et pour accéder à une mine de ressources utiles qui vous aideront à maîtriser LogiCompta en toute simplicité."
                            textColor="var(--about-title-color1)"
                        />
                        <FeatureBox
                            iconSrc={PhoneIcon}
                            altText="phoneIcon"
                            title="Assistance dédiée"
                            description="Chez LogiCompta, nous comprenons l'importance d'une assistance dédiée pour assurer la satisfaction de nos utilisateurs. Notre équipe d'assistance est là pour vous accompagner à chaque étape."
                            textColor="var(--about-title-color2)"
                        />
                    </div>
                </div>
                <div className="Contact sectionPage" id="Contact">
                    <div className="zesdfdsgf">
                    <div className="cercle1">
                        <p>cercle1</p>
                    </div>
                        <div className="formulaire-contact">
                            <div className="infos-contact">
                                <h2>Contact Info</h2>
                                <div className="phone-div">
                                    <img src={PhoneIcon} alt="phone Icon" />
                                    <p>+99 01 02 04 05</p>
                                </div>
                                <div className="email-div">
                                    <img src={MailIcon} alt="email Icon" />
                                    <p>LogiCompta@gmail.com</p>
                                </div>
                                <div className="loca-div">
                                    <img src={locaIcon} alt="localisation Icon" />
                                    <p>123 Rue de l'Exemple, Ville Modèle, Pays Imaginaire.</p>
                                </div>
                                <div className="social-medias">
                                    <img src={YtbIcon} alt="youtube socialLink" className="icon youtube" />
                                    <img src={TwitterIcon} alt="twitter socialLink" className="icon twitter" />
                                    <img src={InstagramIcon} alt="instagram socialLink" className="icon instagram" />
                                    <img src={FacebookIcon} alt="facebook socialLink" className="icon facebook" />
                                </div>
                            </div>
                            <form action="">
                                <input type="text" placeholder="Entrer votre nom" />
                                <input type="text" placeholder="Entrer une adresse email valide" />
                                <textarea name="" id="" placeholder="Entrer votre message " cols="30" rows="10"></textarea>
                                <button>ENVOYER</button>
                            </form>
                        </div>
                    </div>
                        <div className="cercle2">
                            <p>cercle2</p>
                        </div>
                </div>
            </main >
        </>
    )

}