//1. Escribir un programa donde se pueda ingresar los datos de tres personas, como el
//	nombre, apellido, edad y DNI y luego lo muestre por pantalla.


#include "iostream"
#include "string"
using namespace std;
int main()
{
	string nombre[3];
	string apellido[3];
	string edad[3];
	string dni[3];
	
	cout << "Por favor ingrese la siguiente información de las personas: \n";
	for(int i = 0; i < 5; i++)
	{
		cout << "\n******* Dato " << i + 1 << "********:\n";
		cout << "Nombre: ";
		//cin >> titulos[i]; //No funciona con espacios
		getline(cin, nombre[i]);
		cout << "Apellido: ";
		//cin >> autores[i]; //No funciona con espacios
		getline(cin, apellido[i]);
		cout<< "Edad: ";
		getline(cin, edad[i]);
		cout<< "DNI: ";
		getline(cin, dni[i]);
	}
}
