#ifndef STRATEGIQUE_HPP
#define STRATEGIQUE_HPP
#include "Jeu.hpp"

class Strategique: public Jeu
{
    private:
        int niveau;
        int etat;
        int pointJoueur1;
        int pointJoueur2;
    public:
        Strategique();
        ~Strategique();
        int getNiveau();
        int getPointJoueur1();
        int getPointJoueur2();

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