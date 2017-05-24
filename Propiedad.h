#include "Casillas.h"

#ifndef PROPIEDAD_H
#define PROPIEDAD_H


#include <string>
using namespace std;

class Propiedad: public Casillas{
	private:
		bool libre; //indica si la casilla no tiene dueño
		double precio;
		int casas, hoteles;
		double rentanormal;
		double rentaTodas;
		double rentaUnaCasa;
		double rentaDosCasas;
		double rentaTresCasas;
		double rentaCuatroCasas;
		double rentaHotel;
		double precioCasa;
		double precioHotel;
	public:
		//retorna el tipo de casilla: Propiedad
		virtual string getTipo();
		//calcular la renta en base a si el jugador
		//tiene todas las propiedades del mismo color
		//y cantindad de casas y hoteles
		double calcularRenta(double);
		//marca la propiedad como que tiene dueño
		void vender();

};
#endif