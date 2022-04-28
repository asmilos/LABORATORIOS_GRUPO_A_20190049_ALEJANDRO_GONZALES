
//9. Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean negativos.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c;
	float  suma,numero;
	suma = 0;
	
	for (c=0; c<10; c++) {
		cout<<"Ingresa un numero: ";
		cin>>numero;
		if (numero<0){
		suma = suma + numero;
	    }
		else{
			numero;
		}
	}
	cout<<"La suma de los negativos es "<<suma;
	
	
	return 0;
}
