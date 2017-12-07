#include "Comunidade.h"



Comunidade::Comunidade(const string &novoNome, const int &novoID)
{
	
}


Comunidade::~Comunidade()
{
}


string Comunidade::toString() const
{
	ostringstream os;
	os << "Comunidade: " << nome << endl;
	return os.str();
}