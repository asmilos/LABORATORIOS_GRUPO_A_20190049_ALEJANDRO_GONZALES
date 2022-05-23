#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void create(float *&p, int b){
	p=new float[b];
}
void ingresar(float*p,int b){
	int num;
	for(int i=0;i<b;i++){
		num=rand()%10;
		*(p+i)=num;
	}
}
void producto(float*p1, int bx,float*p2,int by){
		float aux1,aux2,aux3;
		float result=0;
		
		if(bx>by)
			aux1=bx;
		else
			aux1=by;
			
		for(int i=0;i<aux1;i++){
			result=result+(*(p1+i))*(*(p2+i));
				
		}
		cout<<"Producto punto de los vectores es : "<<result<<endl;
			
		}
void borrar(float *p, int b){
	delete p;
}
void imprimir(float*p,int b){
	for(int i=0;i<b;i++)

	cout<<*(p+i)<<" ";
	cout<<endl;
}
int main(){
	int bx,by;
	float*p1,*p2;
	cout<<"Vector 1 : ";
		cin>>bx;
		create(p1,bx);
		ingresar(p1,bx);
		imprimir(p1,bx);
		cout<<endl;
	    cout<<"Vector 2 : ";
		cin>>by;
		create(p2,by);
		ingresar(p2,by);
		imprimir(p2,by);
		cout<<endl;
		producto(p1,bx,p2,by);
	  for(int i=0;i<1000000;i++){
	 create(p1,bx);
	 ingresar(p1,bx);
	 imprimir(p1,bx);
	 create(p2,by);
	 ingresar(p2,by);
	 imprimir(p2,by);
	 producto(p1,bx,p2,by);
	 cout<<endl;
	}
	borrar(p1,bx);
	borrar(p2,by);
	return 0;
}

