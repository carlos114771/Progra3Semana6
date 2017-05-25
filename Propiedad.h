#include "Casillas.h"

#ifndef PROPIEDAD_H
#define PROPIEDAD_H


#include <string>
using namespace std;

class Propiedad: public Casillas{
	private:
		bool libre; //indica si la casilla no tiene dueño
		double precio;//informacion para venderla
		//informacion para calcular renta
		int casas, hoteles;
		double rentaNormal;
		double rentaTodas;
		double rentaUnaCasa;
		double rentaDosCasas;
		double rentaTresCasas;
		double rentaCuatroCasas;
		double rentaHotel;
		double precioCasa;
		double precioHotel;
			//end: informacion para calcular renta
		string color;//color de la propiedadl


	public:
		//inicializa libre;
		Propiedad();


		//retorna el tipo de casilla: Propiedad
		virtual string getTipo();
		//calcular la renta en base a si el jugador
		//tiene todas las propiedades del mismo color
		//y cantindad de casas y hoteles
		double calcularRenta(double);
		//marca la propiedad como que tiene dueño
		void vender();
		double getPrecio();//t6
		bool libre();//t6
		int getCasas();//t6
		string getColor();//t6


		//implementar intline
		bool agregarCasa(){
			if (casas<4){
				casas++;
				return true;
			}else{
				return  false;
			}
		}


		bool agregarHotel(){
			if (casas==4){
				hoteles=1;
				casas=0;
				return true;
			}else{
				return false;
			}
		}

};
#endif