//Implementar un programa que rellene un array con los números primos
//	comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.


#include "iostream"
#include <stdio.h>

int main(void)
{
	int x,cont,z,i,tabla[100];
	
	i=0;
	for (x=1;x<=100;x++)
	{
		cont=0;
		for (z=1;z<=x;z++)
		{
		if (x%z==0)
			{
				cont++;
			}
		}
		
		if (cont==2 || z==1 || z==0)
		{
			tabla[i]=x;
			i++;
		}
		
	}
	
	for (x=100;x>0;x--)
	{
		printf("%d\n",tabla[x]);
	}
	
	system("PAUSE");     
	return 0;
	
 }
