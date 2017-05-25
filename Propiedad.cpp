#include "Propiedad.h"
#include <string>
using namespace std;

Propiedad::Propiedad(){
	libre=true;
}

string Propiedad::getTipo(){
	return "Propiedad";
}

double Propiedad::calcularRenta(bool todosColor){
	//return -1;
	double retval=0;
	//TODO: implementar
	if(todosColor){//si tiene todas las propiedades del mismo color
		retval=rentaTodas;
		switch(casas){
			case 1:
				retval=rentaUnaCasa;
			break;
			case 2:
				retval=rentaDosCasas;
			break;
			case 3:
				retval=rentaTresCasas;
			break;
			case 4:
				retval=rentaCuatroCasas;
			break;
		}
		if(hoteles==1){
			retval=rentaHotel;
		}
	}else{
		retval=rentaNormal;
		return retval;
	}
}

void Propiedad::vender(){
	//implementar
	libre=false;
}