#include <iostream>
#include "../headers/Foot.hpp"
#include "../headers/Combat.hpp"
#include "../headers/Strategique.hpp"

int main()
{
    std::cout << "============================" << std::endl;
    Foot *foot = new Foot;
    foot->afficher();
    foot->start();
    foot->afficherEtat();

    foot->pause();
    foot->afficherEtat();

    foot->play();
    foot->afficherEtat();

    foot->quit();
    foot->afficherEtat();

    std::cout << "============================" << std::endl;
    Combat *combat = new Combat;
    combat->afficher();
    combat->start();
    combat->afficherEtat();

    combat->pause();
    combat->afficherEtat();

    combat->play();
    combat->afficherEtat();
    
    combat->quit();
    combat->afficherEtat();
    
    std::cout << "============================" << std::endl;
    Strategique *strategique = new Strategique;
    strategique->afficher();
    strategique->start();
    strategique->afficherEtat();

    strategique->pause();
    strategique->afficherEtat();

    strategique->play();
    strategique->afficherEtat();

    strategique->quit();
    strategique->afficherEtat();
    
    std::cout << "============================" << std::endl;
    
    return 0;
}