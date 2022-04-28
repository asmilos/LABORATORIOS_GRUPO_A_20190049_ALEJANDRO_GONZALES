
//3. Escribir un programa que visualice en pantalla los números múltiplos de 5 comprendidos entre 1 y 100.

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	

cout<<"Los multiplos de 5 entre 1 y 100"<<endl;
for (int i=1;i<=100;i++)
{
	if (i%5==0){
		cout<<i<<endl;
	}
}
	return 0;
}

