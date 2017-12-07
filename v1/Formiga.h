#ifndef FORMIGA_H
#define FORMIGA_H
#include "Mundo.h"
#include "Ninho.h"

class Mundo;
class Ninho;
class Comunidade;

class Formiga
{
	string especie;
	int energia, numeroSerie;
public:

	Formiga(int &novaEnergia, string &novaEspecie):numeroSerie(numeroSerie++);
	int getEnergia();
	~Formiga();
};



#endif