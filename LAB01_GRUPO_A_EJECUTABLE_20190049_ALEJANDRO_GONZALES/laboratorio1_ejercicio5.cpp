//5. Elabore un código que reciba como entrada una secuencia de caracteres que contiene un numero flotante y retorne el número redondeado.

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	vector<double> dfloats {4, 7, 10, 56, 27.4, 3};
	
	for (auto & numero: dfloats) {
		cout << round(numero) << endl;
	}
	
	return 0;
}

