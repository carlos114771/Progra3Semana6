#include "Casillas.h"
#include <string>
#include <iostream>

using namespace std;

int Casillas::getPosicion(){
	return posicion;
}

void Casillas::setPosicion(int pos){
	posicion=pos;
}

string Casillas::getNombre(){
	return nombre;
}

void Casillas::set(string name){
	nombre = name;
}

