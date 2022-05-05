//Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
//	debe mostrar la suma de todos los números que estén en una fila par.

#include <iostream>
using namespace std;

void CargarMat();
int SumaFilaPar(int mat[][3]);

int mat[5][3],f,c; 

int main(){
	CargarMat();
	cout << "La sumatoria de las filas pares es: " << SumaFilaPar(mat);
	return 0;
}
	void CargarMat(){
		for(f = 0; f < 5; f++)
		{
			for(c = 0; c < 3; c++){ 
				cout<<"Introduce el valor de m["<<f<<"]["<<c<<"]" ;
				cin >> mat[f][c];
			} 
			cout<< "\n## Fila "<<f+1<<" completada\n";
		}
	}
		
		int SumaFilaPar(int mat[][3]){
			int suma = 0;
			for(f = 0;f < 4;f += 2){
				for(c = 0; c <3 ; c++){ suma += mat[f][c]; }
			}
			return suma;
		 }
