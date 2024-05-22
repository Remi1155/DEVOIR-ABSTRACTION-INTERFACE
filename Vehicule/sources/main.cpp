#include <iostream>
#include "../headers/Auto.hpp"
#include "../headers/Moto.hpp"

int main()
{
    Auto automobile = Auto();
    automobile.setMarque("MAZDA");
    automobile.setNombreRoue(4);

    Moto *moto = new Moto;
    moto->setMarque("PETERS");
    moto->setNombreRoue(2);

    std::cout << "====================================" << std::endl;
    automobile.conduire();
    automobile.afficher();

    std::cout << "====================================" << std::endl;
    moto->conduire();
    moto->afficher();
    std::cout << "====================================" << std::endl;
}