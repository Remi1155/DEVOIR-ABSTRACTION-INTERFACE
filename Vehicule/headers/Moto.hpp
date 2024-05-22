#ifndef MOTO_HPP
#define MOTO_HPP
#include "Vehicule.hpp"

class Moto: public Vehicule
{
	public:
		int longueurGidon;
		Moto();
		~Moto();
		void afficher();
		void conduire();
};

#endif