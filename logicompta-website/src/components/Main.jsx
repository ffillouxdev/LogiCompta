import React, { useState } from "react";
import emailjs from '@emailjs/browser';
import emailValidator from 'email-validator';

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
    // on recupere les données du formulaire
    const [formData, setFormData] = useState({
        name: "",
        user_email: "",
        message: "",
    });

    // Fonction pour vérifier si l'utilisateur a déjà envoyé un message aujourd'hui
    const checkIfMessageSentToday = () => {
        const lastSubmissionDate = localStorage.getItem('lastSubmissionDate');
        const today = new Date().toISOString().split('T')[0]; // Date d'aujourd'hui

        return lastSubmissionDate === today;
    }

    const handleSubmit = (e) => {
        e.preventDefault();
        console.log(formData);
        if (!checkIfMessageSentToday()) {
            if (formData.name && formData.user_email && formData.message) {
                if (emailValidator.validate(formData.user_email)) {
                    emailjs.sendForm("service_9j7fujj", "template_ixooslr", e.target, {
                        publicKey: 'lvl2wKPxbQgJFF9td',
                    })
                        .then((result) => {
                            console.log(result.text);
                            alert("Votre message a bien été envoyé");
                            setFormData({
                                name: "",
                                user_email: "",
                                message: "",
                            });
                            // Stocker la date de la dernière soumission
                            const today = new Date().toISOString().split('T')[0];
                            localStorage.setItem('lastSubmissionDate', today);
                        }, (error) => {
                            console.log(error.text);
                            alert("Une erreur s'est produite, veuillez réessayer plus tard");
                        });
                } else {
                    alert("Veuillez saisir une adresse e-mail valide");
                }
            } else {
                alert("Veuillez remplir tous les champs du formulaire");
            }
        } else {
            alert("Vous avez déjà envoyé un message aujourd'hui. Veuillez réessayer demain");
        }
    }

    const handleChange = (e) => {
        const { name, value } = e.target;
        setFormData(prevState => ({
            ...prevState,
            [name]: value
        }));
    };


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
                                fileName="README.md"
                            />
                            <OSButton
                                logoSrc={logoLinux}
                                altText="linux logo"
                                osName="Linux"
                                version="1.0.0"
                                fileName="README.md"
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
                <div className="Contact sectionPage">
                    <div className="zesdfdsgf">
                        <div className="cercle1" id="Contact">
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
                            <form onSubmit={handleSubmit}>
                                <input
                                    type="text"
                                    name="name"
                                    value={formData.name}
                                    onChange={handleChange}
                                    placeholder="Entrer votre nom"
                                />
                                <input
                                    type="email"
                                    name="user_email"
                                    value={formData.user_email}
                                    onChange={handleChange}
                                    placeholder="Entrer votre adresse email"
                                />
                                <textarea placeholder="Entrer votre message " cols="30" rows="10" value={formData.message} name="message" onChange={handleChange}></textarea>
                                <button type="submit">Envoyer</button>
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