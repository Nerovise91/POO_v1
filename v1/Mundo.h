#ifndef MUNDO_H
#define MUNDO_H
#include <iostream>
#include <vector>


using namespace std;

class Mundo
{
	int x, y;
public:
	Mundo(int novoX, int novoY)
	{
		novoX = this->x;
		novoY = this->y;
		cout << "\nA construir comunidade ..." << endl;
	}
	~Mundo();

	void removeMortos();
};

class Mundo
{
public:
	Mundo();
	~Mundo();
};
#endif
