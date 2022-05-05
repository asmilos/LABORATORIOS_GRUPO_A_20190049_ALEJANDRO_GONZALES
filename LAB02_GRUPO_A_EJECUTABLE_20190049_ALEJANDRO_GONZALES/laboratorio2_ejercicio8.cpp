#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
		char seguir;
		int i, numero;
		{
			cout<<"Introduzca un numero entero: ";
			cin>> numero ;
			
			cout<<"\n   La tabla de multiplicar del "<<numero<<" es:\n";
			
			/* Inicio del anidamiento */
			
			for ( i = 1 ; i <= 12 ; i++ )
				cout<< i <<"*"<< numero <<"="<< i * numero<<endl;
			
		
		return 0;
	}
}

