#ifndef COMUNIDADE_H
#define COMUNIDADE_H
#include <vector>
#include <string>
#include <sstream>
#include "Mundo.h"
#include "Ninho.h"
#include "Formiga.h"
using namespace std;
class Comunidade
{
	vector <Ninho*> ninhos;
	vector <Ninho *> novoNinho;

	string nome;
	const int id=0;
	int numeroPopulacao = 0; 
public:
	Comunidade(const string &novoNome, const int &novoID);
	~Comunidade();
	string toString()const;
	void getNome() const;
	int getPopulacao() const;
	void criarNinho(Formiga *f);
};

#endif
//OLA MUNDO
