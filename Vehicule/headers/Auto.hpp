#ifndef AUTO_HPP
#define AUTO_HPP
#include "Vehicule.hpp"

class Auto: public Vehicule
{		
	public:
		int diametreVolan;
		Auto();
		~Auto();
		void afficher();
		void conduire();
};

#endif
