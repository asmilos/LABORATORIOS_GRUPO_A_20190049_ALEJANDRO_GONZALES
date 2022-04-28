//2. Calcule los primeros 50 números primos y muestre el resultado en pantalla.
#include <iostream>
using namespace std;
bool primo(int n){
	bool condicion;
	if(n != 1 && n != 0){
		for(int i = 2; i <= n ; i++){
			if(n % i == 0){
				if(n == i){
					condicion = true;
				}
				else {
					condicion = false;
					return condicion;
				}
			}
		}
	}
	else condicion = false;
	return condicion;
}
	int main(){
		int n;
		cout<<"¿Hasta que numero primo desea buscar? "<<endl;
		cin>>n;
		
		for(int i = 1 ; i <=n ; i++){
			if(primo(i)) cout<<i<<endl;
		}
		return 0;
	}

