#include "Casillas.h"
#ifndef JUGADOR_H
#define JUGADOR_H


#include <string>
#include <vector>
using namespace std;

class Jugador{
	private:
		string pieza;
		vector<Casillas*> casillas;
		double dinero;
		int turno;
		
	public:
		Jugador();//inicializacion
		
		//turno
		void setTurno(int);//t6
		int getTurno();//t6
		string getPieza();//t6
		void  setPieza(string);
		void agregarCasillas(Casillas*);//t6

		vector<Casillas*>&getCasillas();
		double getDinero();//t6
		void setDinero(double);//t6
		//double Pagar(double);
		void Pagar(double);//t6
};
#endif