#include "../headers/Foot.hpp"
#include <iostream>

Foot::Foot()
{
    niveau = 1;
    but = 0;
    butAdverse = 0;
    etat = 0;   
    /* etat = 0 : pas en jeu
       etat = 1 : en jeu
       etat = 2 : en pause */ 
}

Foot::~Foot()
{

}

int Foot::getNiveau()
{
    return niveau;
}

int Foot::getBut()
{
    return but;
}

int Foot::getButAdverse()
{
    return butAdverse;
}

int Foot::getEtat()
{
    return etat;
}


void Foot::restart()
{
    etat = 1;
}

void Foot::start()
{
    etat = 1;
}

void Foot::pause()
{
    etat = 2;
}

void Foot::play()
{
    etat = 1;
}

void Foot::quit()
{
    etat = 0;
}


void Foot::afficherEtat()
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

void Foot::misAJourNiveau()
{
    if(but > butAdverse)
    {
        niveau += 1;
    }
}

void Foot::afficher()
{
    std::cout << "JEU DE FOOT" << std::endl;
    std::cout << "niveau = " << getNiveau() << std::endl;
    afficherEtat();
    std::cout << "score: (moi, ordinateur) = (" << getBut() << ", " << getButAdverse() << ")"<< std::endl;
}