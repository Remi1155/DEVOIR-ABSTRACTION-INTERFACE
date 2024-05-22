#ifndef VEHICULE_HPP
#define VEHICULE_HPP
#include <string>


class Vehicule
{
	protected:
		std::string marque;
		int nombreRoue;
	public:
		Vehicule();
		~Vehicule();
		virtual void conduire() = 0;
		std::string getMarque();
		void setMarque(std::string marque);
		int getNombreRoue();
		void setNombreRoue(int nombreRoue);
};

#endif
