#include <iostream> 
using namespace std; 

int main () 
{
	int n, num;
	int mayor,menor;
	float sum,media;
	mayor=0;
	menor=0;
	sum=0;
	media=0;
	cout<<"Ingrese la cantidad de numeros que va a registrar"<<endl;
	cin>> n;
	
	for (int i = 1; i <= n; i++)
	{
		cout<<"Ingrese un numero: "; cin>>num;
		if(i == 1)
		{ mayor = menor = num;}
		if (num > mayor)
		{ mayor = num; }
		if (num < menor)
		{ menor = num; }
		sum += num;
	}
	
	media = sum / n;
	cout<<"El numero mayor es: "<<mayor<<endl;
	cout<<"El numero menor es: "<<menor<<endl;
	cout<<"La media total es: "<<media<<endl;
	
	return 0;
}
