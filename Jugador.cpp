#include "Jugador.h"
#include <string>

using namespace std;

Jugador::Jugador(){
	turno=0;
	dinero =1500;
}

int Jugador::getTurno(){
	return turno;
}

void Jugador::setTurno(int turno){
	this->turno=turno;
}


string Jugador::getPieza(){
	return pieza;
}

void Jugador::setPieza(string pieza){
	this->pieza=pieza;
}


double Jugador::getDinero(){
	return dinero;
}

/*void Jugador::setDinero(double pdinero){
	if(pdinero>0){
		dinero=dinero+pdinero;
	}
	return dinero;
}

void Jugador::Pagar(double pagar){
	if(pagar>0){
		dinero=dinero-pagar;
	}
	return dinero;
}*/

void Jugador::setDinero(double pdinero){
	if (pdinero>0){
		dinero=dinero+pdinero;
	}
	this->dinero;
}

void Jugador::Pagar(double pagar){
	if (pagar>0){
		dinero=dinero-pagar;
	}
	this->dinero;
}