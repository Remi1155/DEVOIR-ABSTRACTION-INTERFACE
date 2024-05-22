#include <iostream>
#include "../headers/Auto.hpp"

Auto::Auto()
{
    diametreVolan = 25;
}

Auto::~Auto()
{

}

void Auto::afficher()
{
    std::cout << "Voiture de marque " << getMarque() 
              << ", de volan de diametre = " <<diametreVolan
              <<"cm, le nombre de roue est alors égal à " 
              << getNombreRoue() << " ." << std::endl;
}

void Auto::conduire()
{
    std::cout << "Conduire une vehicule." << std::endl;
}