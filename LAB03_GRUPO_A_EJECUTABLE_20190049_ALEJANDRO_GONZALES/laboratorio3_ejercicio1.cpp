#include <iostream>


using namespace std;

int base, exponente, resultado;
int potencia(int, int);



int main(){
	
	cout << "Este programa le permite calcular potencias." << endl;
	
	cout << "Ingrese la base ";
	
	cin >> base;
	
	cout << "Ingrese el exponente ";
	
	cin >> exponente;
	
	cout << "El resultado es: " << potencia(base, exponente);
	
	return 0;
}
int potencia(int base, int exponente){
	resultado=0;
	int x=1;
	while (x<exponente){
		
		if (resultado<base){
			
			resultado=base*base;
			
		}		
		else{
			
			resultado=resultado*base;
			
		}
		x++;
	 }	
	return resultado;
}
	
	

