#include "Integer.h"

Integer::Integer(int entero){
	this->entero=entero;
}

Integer::Integer(){
	entero=0;
}

int Integer::getValue(){
	return entero;
}

void Integer::setValue(int valor){
	entero=valor;
}