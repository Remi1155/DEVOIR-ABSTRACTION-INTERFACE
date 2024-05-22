#include <iostream>
#include "../headers/Combat.hpp"

Combat::Combat()
{
    niveau =1;
    mesPoints = 1;
    pointsOrdinateur = 2;
    etat = 0;
        /* etat = 0 : pas en jeu
       etat = 1 : en jeu
       etat = 2 : en pause */ 
}

Combat::~Combat()
{

}

int Combat::getNiveau()
{
    return niveau;
}

int Combat::getMesPoints()
{
    return mesPoints;
}

int Combat::getPointsOrdinateur()
{
    return pointsOrdinateur;
}



void Combat::restart()
{
    etat = 1;
}

void Combat::start()
{
    etat = 1;
}

void Combat::pause()
{
    etat = 2;
}

void Combat::play()
{
    etat = 1;
}

void Combat::quit()
{
    etat = 0;
}





void Combat::afficherEtat()
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

void Combat::misAJourNiveau()
{
    if(mesPoints > pointsOrdinateur)
    {
        niveau += 1;
    }
}

void Combat::afficher()
{
    std::cout << "JEU DE COMBAT" << std::endl;
    std::cout << "niveau = " << getNiveau() << std::endl;
    afficherEtat();
    std::cout << "score: (moi, ordinateur) = (" << getMesPoints() << ", " << getPointsOrdinateur() << ")"<< std::endl;
}