
//10. Escribir un programa que almacene la cadena de caracteres contraseña en una variable, pregunte al usuario por la contraseña hasta que introduzca la contraseña correcta.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string pass,con;
		pass="contraseña";
	    con="";
	while (con!= pass){
		cout<<"Ingrese la contraseña: "; cin>>con;
		
	}
	cout<<"Contraseña correcta";
	return 0;
}

