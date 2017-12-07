#ifndef NINHO_H
#define NINHO_H
#include "Mundo.h"

class Ninho
{
	vector <Formiga *> formiga;
	vector <Formiga *> novaFormiga;
	int numeroSerie;

public:
	Ninho();
	~Ninho();
	void novaFormiga(const string &novoX, const string novoY);

};

class Ninho
{
public:
	Ninho();
	~Ninho();
	void novaFormiga(string especie0, string cor0);
	int setEnergia();
	int getEnergiaAtual();

};





#endif
