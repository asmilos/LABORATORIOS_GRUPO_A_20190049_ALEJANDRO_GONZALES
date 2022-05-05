#include <iostream>
using namespace std;
int main() {
	unsigned long long aux = 1, fib = 0, lim, init;
	cout << "Ingrese un numero para la sucesion de fibonacci: ";
	cin >> lim;
	if(lim > 0) {
		for(init = 1; init <= lim; init++) {
			cout << "[" << fib << "] ";
			aux += fib; 
			fib = aux - fib;
		}
	} else {
		cout << "El numero debe ser mayor a cero!!" << endl;
	}
	cout << "\n";
	return 0;
}

