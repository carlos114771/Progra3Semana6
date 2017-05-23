#include <iostream>
#include "Integer.h"

using namespace std;

int main(){
	Integer entero(100);
	Integer entero2(100);
	cout<<"El entero es: "<<entero+10.8<<endl;

	if (entero==entero2){
		cout<<"Son iguales "<<endl;
	}

	//static cast
	cout<<static_cast<int>(entero)<<endl;
	
	//int i=0;
	//cout<< i++;


	return 0;
}