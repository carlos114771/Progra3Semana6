#include "Casillas.h"
#ifndef TABLERO_H
#define TABLERO_H

#include <vector>
#include <iostream>

using namespace std;

class Tablero{
	private:
		vector<Casillas*> casillas;

	public:
		Casillas* getCasillas(int);
		Tablero();
		~Tablero();
};


#endif
