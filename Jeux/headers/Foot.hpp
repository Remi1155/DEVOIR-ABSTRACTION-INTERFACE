#ifndef FOOT_HPP
#define FOOT_HPP
#include "Jeu.hpp"

class Foot: public Jeu
{
    private:
        int niveau;
        int but;
        int butAdverse;
        int etat;
    public:
        Foot();
        ~Foot();
        int getNiveau();
        int getBut();
        int getButAdverse();
        int getEtat();

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