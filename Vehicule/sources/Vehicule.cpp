#include <iostream>
#include "../headers/Vehicule.hpp"

Vehicule::Vehicule()
{
    marque = "KIA";
}

Vehicule::~Vehicule()
{

}

std::string Vehicule::getMarque()
{
    return marque;
}

void Vehicule::setMarque(std::string marque)
{
    this->marque = marque;
}

int Vehicule::getNombreRoue()
{
    return nombreRoue;
}

void Vehicule::setNombreRoue(int nombreRoue)
{
    this->nombreRoue = nombreRoue;
}