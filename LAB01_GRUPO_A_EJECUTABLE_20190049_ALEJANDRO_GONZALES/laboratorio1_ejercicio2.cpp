// 2. Escriba un código que solicite el primer nombre de una persona, 
	//el apellido paterno y el apellido materno. Retornar su correo UNSA generado, el cual consiste de 
	//la primera letra del nombre, el apellido paterno completo, y la primera letra del apellido materno. (se agrega el dominio de la universidad al final).
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre,apellidop,apellidom,correo;
	
	cout<<"Escriba su primer nombre: "; cin>>nombre;
	cout<<"Escriba su apellido paterno: "; cin>>apellidop;
	cout<<"Escriba su apellido materno: "; cin>>apellidom;
	
	correo=nombre[0]+apellidop+apellidom[0];
	cout<<"Su correo UNSA es: "<<correo<<"@unsa.edu.pe";
	return 0;
}

