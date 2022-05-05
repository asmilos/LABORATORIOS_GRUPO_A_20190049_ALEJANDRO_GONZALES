
//8. Escribir un programa que calcule la media de x cantidad números introducidos por el teclado.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int  c,n ;
	float promedio, suma,numero;
	suma = 0;
	
	cout<<"Ingresa el numero de elementos: ";
	cin>>n;
	for (c=0; c<n; c++) {
		cout<<"Ingresa un numero: ";
		cin>>numero;
		suma = suma + numero;
	}
	promedio = suma/n;
	

		cout<<"La media es "<<promedio;


return 0;
}
