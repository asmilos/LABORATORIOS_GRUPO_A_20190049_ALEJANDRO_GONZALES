#include <iostream>
using namespace std;
int bisiesto(int);
int main(int argc, char *argv[]) {
	int anio;
	cout<<"Introduce el año: "; 
	cin >> anio;
	if(bisiesto(anio))  
		cout << "Es año bisiesto" << endl;
	else
		cout << "No es bisiesto" << endl;
	
	return 0;
}
int bisiesto(int x){
	if(x%4==0 && x%100!=0 || x%400==0)
		return 1;
	else
		return 0;
}

