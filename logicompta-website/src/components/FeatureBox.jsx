import { useEffect } from "react";
import { gsap } from "gsap";
import ScrollTrigger from "gsap/ScrollTrigger";
import { Power3 } from "gsap";

gsap.registerPlugin(ScrollTrigger);

const FeatureBox = ({ iconSrc, altText, title, description, textColor }) => {
  const slideBottomToTop = (elem, delay, duration) => {
    gsap.fromTo(
      elem,
      {
        opacity: 0,
        y: 50,
      },
      {
        opacity: 1,
        y: 0,
        duration: duration,
        delay: delay,
        ease: Power3.easeOut,
        scrollTrigger: {
          trigger: elem,
          start: "top bottom",
        },
      }
    );
  };

  useEffect(() => {
    const sections = document.querySelectorAll('.feature-box');
    sections.forEach((section, index) => {
      const triggerElem = index === 0 ? section : section.parentElement;
      const start = index === 0 ? 'top 80%' : 'top 50%';

      ScrollTrigger.create({
        trigger: triggerElem,
        start: start,
        onEnter: () => {
          if (index === 0) {
            slideBottomToTop(section, 2.5, 2.5);
          } else if (index === 1) {
            slideBottomToTop(section, 2, 2);
          } else if (index === 2) {
            slideBottomToTop(section, 1.5, 1.5);
          } else if (index === 3) {
            slideBottomToTop(section, 1, 1);
          }
        }
      });
    });
  }, []);

  return (
    <div className="div-box-type feature-box" id="A_propos">
      <div className="box-left">
        <div className="box">
          <img src={iconSrc} alt={altText} />
        </div>
      </div>
      <div className="box-right">
        <h3 style={{ color: textColor }}>{title}</h3>
        <p>{description}</p>
      </div>
    </div>
  );
};

export default FeatureBox;
