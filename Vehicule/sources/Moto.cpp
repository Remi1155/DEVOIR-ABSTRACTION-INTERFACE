#include <iostream>
#include "../headers/Moto.hpp"

Moto::Moto()
{
    longueurGidon = 50;
}

Moto::~Moto()
{

}

void Moto::afficher()
{
    std::cout << "Moto de marque " << getMarque()
              << ", de gidon de longueur = " << longueurGidon 
              << "cm, qui a donc " << getNombreRoue() << " roue." << std::endl;
}

void Moto::conduire()
{
    std::cout << "Conduire un moto." << std::endl;
}