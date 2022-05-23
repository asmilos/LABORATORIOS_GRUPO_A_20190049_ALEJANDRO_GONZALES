#include <iostream>
using namespace std;
void swap(int *a, int *b){
	int auxiliar=*a;
	*a=*b;
	*b=auxiliar;
}

int main(int argc, char *argv[]) {
	int c,d;
	c=10;
	d=20;
	swap(&c,&d);
	cout<<"El valor de c es: "<< c <<endl;
	cout<<"El valor de d es: "<< d <<endl;
	
	return 0;
}

