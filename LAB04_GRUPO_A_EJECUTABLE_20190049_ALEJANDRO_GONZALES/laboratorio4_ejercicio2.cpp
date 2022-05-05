//2. Hacer un array unidimensional que acepte ocho números enteros. Luego le
//	pregunte al usuario que ingrese un número a buscar, implementar una función que
	//busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
	//contrario, retornar falso.

#include <iostream>
using namespace std;
const int dim = 8;

bool BuscaVal(int v[], int);
int main(){
	int vector[dim],x,valor;
	
	cout<<"Ingresar 8 numeros enteros: ";
	for(int i = 0; i < dim; i++){
		cin >> vector[i];cout<<"\n";
	}
	cout << "Ingrese el numero a buscar en el vector: ";
	cin >> x;
	valor = BuscaVal(vector,x);
	if(valor){ cout << "Se encontro el valor."; }
	else{ cout<<"No se encontro el valor."; }
	return 0;
}
	
	bool BuscaVal(int v[],int val){
		for(int i = 0; i < dim; i++){
			if(val == v[i]){ return true; }
		}
		return false;
	}
