#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void suma(int a,int b){
	cout<<"Escogio suma: "<<a<<"+"<<b<<"= "<<a+b;
}
void resta(int a,int b){
	cout<<"Escogio resta: "<<a<<"-"<<b<<"= "<<a-b;
}
void multiplicaion(int a,int b){
	cout<<"Escogio multiplicaion: "<<a<<"*"<<b<<"= "<<a*b;
}
void division(int a,int b){
	cout<<"Escogio division: "<<a<<"/"<<b<<"= "<<a/b;
}
int main(){
	int a,b;
	void (*p[4])(int,int)={suma,resta,multiplicaion,division};
	cout<<"Ingrese el primer numero"<<endl;
	cin>>a;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>b;	
	int num;
	cout<<"opcion 0 : suma. "<<endl;
	cout<<"opcion 1 : resta. "<<endl;
	cout<<"opcion 2 : multiplicaion. "<<endl;
	cout<<"opcion 3 : division. "<<endl;
	cout<<"Escoja la opcion a efectuar: "<<endl;
	cin>>num;
while(num>=0 && num<=3){
		(*p[num])(a,b);
		cout<<"\nEscoja la opcion a efectuar: "<<endl;
		cin>>num;
}
	return 0;
}

