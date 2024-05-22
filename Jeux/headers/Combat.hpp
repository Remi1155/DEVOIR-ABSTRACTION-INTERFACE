#ifndef COMBAT_HPP
#define COMBAT_HPP
#include "Jeu.hpp"

class Combat: public Jeu
{
    private:
        int niveau;
        int etat;
        int mesPoints;
        int pointsOrdinateur;
    public:
        Combat();
        ~Combat();
        int getNiveau();
        int getMesPoints();
        int getPointsOrdinateur();

        void start();
        void restart();
        void pause();
        void play();
        void quit();

        void afficherEtat();
        void misAJourNiveau();
        void afficher();
};

#endif