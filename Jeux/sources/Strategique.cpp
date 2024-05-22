#include <iostream>
#include "../headers/Strategique.hpp"

Strategique::Strategique()
{
    niveau = 1;
    pointJoueur1 = 0;
    pointJoueur2 = 0;
    etat = 0;
        /* etat = 0 : pas en jeu
       etat = 1 : en jeu
       etat = 2 : en pause */ 
}

Strategique::~Strategique()
{

}

int Strategique::getNiveau()
{
    return niveau;
}

int Strategique::getPointJoueur1()
{
    return pointJoueur1;
}

int Strategique::getPointJoueur2()
{
    return pointJoueur2;
}



void Strategique::restart()
{
    etat = 1;
}

void Strategique::start()
{
    etat = 1;
}

void Strategique::pause()
{
    etat = 2;
}

void Strategique::play()
{
    etat = 1;
}

void Strategique::quit()
{
    etat = 0;
}



void Strategique::afficherEtat()
{
    switch (etat)
    {
    case 0:
        std::cout << "Etat: Pas en jeu" << std::endl; 
        break;
    case 1:
        std::cout << "Etat: En jeu" << std::endl;
        break;
    case 2:
        std::cout << "Etat: Pas en jeu" << std::endl; 
        break;
    default:
        std::cout << "Etat: Non reconnu" << std::endl; 
        break;
    }
}

void Strategique::misAJourNiveau()
{
    if(pointJoueur1 > pointJoueur2)
    {
        niveau += 1;
    }
}

void Strategique::afficher()
{
    std::cout << "JEU DE STRATÉGIQUE" << std::endl;
    std::cout << "niveau de joueur1= " << getNiveau() << std::endl;
    afficherEtat();
    std::cout << "score: (joueur1, joueur2) = (" << getPointJoueur1() << ", " << getPointJoueur2() << ")"<< std::endl;
}