
//7. Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es divisor del otro.

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout<<"Ingrese el primer numero: "; cin>>num1;
	cout<<"Ingrese el segundo numero: "; cin>>num2;
	
	if (num1%num2==0 ){
		cout<<"El numero "<<num1<<" es divisible entre "<<num2;
	}
	else if(num2%num1==0){
		cout<<"El numero "<<num2<<" es divisible entre "<<num1;
	}
	   else {
			cout<<"No son numeros divisibles";
		  }
 return 0;
}

