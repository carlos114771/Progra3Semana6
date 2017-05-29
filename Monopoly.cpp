#include "Casillas.h"
#include "Propiedad.h"
#include "Jugador.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	Casillas* c = new Propiedad();

	//c->vender();

	delete c;

	Jugador* player= new Jugador();

	cin>>*player;

	cout<<player->getPieza()<<endl;
	cout<<player->getTurno()<<endl;
	//delete player;
//prueba de archivos
	ifstream file("jugadores.txt");
	if(file.is_open()){
		file>>*player;

	}
	delete player;
	cout<<"Pieza: "<<player->getPieza()<<endl;
	cout<<"Dinero: "<<player->getDinero()<<endl;


	return 0;
}