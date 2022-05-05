//6. Escribe un programa que pida nueve números enteros y los almacene en una matriz
//	3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
	//	fila con mayor suma.



#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
		int m[3][3];
		int f,c, sumafila=0, nfila=0, mayorfila=0;
		
		for (f=0;f<3;f++) {
			for (c=0;c<3;c++) {
				cout<<"Introduce el valor de m["<<f<<"]["<<c<<"]" ;
				cin >> m[f][c];
			} 
			cout<< "\n## Fila "<<f+1<<" completada\n";
		}
		
		for (f=0;f<3;f++) {
			sumafila=0;
			nfila=f+1;
			for (c=0;c<3;c++) {
				sumafila+=m[f][c];
				if (sumafila > mayorfila) {
					mayorfila=sumafila;
				}
			}
		}
		
		cout<< "\n-----------\n" ;
		cout<< "La mayor suma es "<<mayorfila;
		
		return 0;
	}

