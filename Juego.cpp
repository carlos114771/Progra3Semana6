#include "Juego.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

Juego::Juego(){
	tablero = new Tablero();
	turnoActual=1;

}

Juego::~Juego(){
	delete tablero;
	for (int i = 0; i < jugadores.size(); ++i){
		delete jugadores[i];
	}
	//liberar tarjetas

}

void Juego::leerJugadores(){
	ifstream fileJugadores("Jugadores.txt");
	if (fileJugadores.is_open()){
		for (int i = 0; i < 2; ++i){
			Jugador* jugador = new Jugador();
			fileJugadores>>*jugador;
			jugadores.push_back(jugador);
		}
		fileJugadores.close();
	}
}

int Juego::jugar(){
	//inicializar todo
	leerJugadores();
	//inicializar la posicion de los jugadores
	for (int i = 0; i < jugadores.size(); ++i){
		posiciones.push_back(1);
	}

	while(true){
		//determinar turno
		Jugador* jugadorActual=NULL;
		for (int i = 0; i < jugadores.size(); ++i){
			if(jugadores[i]->getTurno()==turnoActual){
				posicionJugadorActual=i;
				jugadorActual=jugadores[i];
				//mover el turnoActual hacia adentate
				//turnoActual++;	
				(turnoActual + 1 >jugadores.size())?turnoActual=1:turnoActual++;
			}
		}
		//tirar dados
		int resultadoDados;
		resultadoDados=1;
		//mover el jugador de casilla
		int nuevaCasilla =posiciones[posicionJugadorActual]+resultadoDados;	
		if(nuevaCasilla>=tablero->getCantidadCasillas()){
			nuevaCasilla-=tablero.>getCantidadCasillas();
		}
		posiciones[posicionJugadorActual]=nuevaCasilla;

		Casillas* casillaActual=tablero->getCantidadCasillas(nuevaCasilla);
		if(casillaActual!=NULL){
			//determinar tipo de casilla
	
			
			//acciones por casilla

		}

	}
}
		//loop 
		//determinar a quien le toca jugar