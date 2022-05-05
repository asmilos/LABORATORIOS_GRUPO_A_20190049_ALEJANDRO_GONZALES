//6. Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado en binario.

#include <iostream>
using namespace std;

string binario(int n)
{
	string r;
	while (n != 0){
		r += ( n % 2 == 0 ? "0" : "1" );
		n /= 2;
	}
	return r;
}

int main() {
	int numero;
	cout<<"Escoja un numero entre 100 y 999: ";
	cin>>numero;
	if (numero>=100 && numero<=999){
		cout << "Su numero es: " << numero << endl;
		cout << "Su numero en binario es : " << binario(numero) << endl;
	}
	else{
		cout<<"Numero fuera del rango indicado";
	}
	
	return 0;
}

