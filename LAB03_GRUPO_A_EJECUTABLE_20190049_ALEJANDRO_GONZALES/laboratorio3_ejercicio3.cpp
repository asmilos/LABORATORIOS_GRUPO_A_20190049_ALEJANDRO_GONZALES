#include <iostream>
using namespace std;
int bisiesto(int);                   
int fecha_valida(int , int, int);
int calcular_edad(int, int, int, int, int, int);
int main()
{
	int diaa, mesa, anioa, dian, mesn, anion, edad,mesac,diaac;
	do
	{
		cout << "Introduce fecha actual: " << endl;
		cout << "Dia : "; cin >> diaa;
		cout << "Mes : "; cin >> mesa;
		cout << "Año: "; cin >> anioa;
	}
	while(!(fecha_valida(diaa, mesa, anioa)));
	do
	{
		cout << endl << "Introduce fecha de nacimiento: " << endl;
		cout << "Dia : "; cin >> dian;
		cout << "Mes : "; cin >> mesn;
		cout << "Año: ";   cin >> anion;
	}while(!(fecha_valida(dian, mesn, anion)));
	edad = calcular_edad(diaa, mesa, anioa, dian, mesn, anion);
	cout << endl << "Edad : " << edad << endl << endl;
	cout << endl << "Mes : " << mesac << endl << endl;
	cout << endl << "Dia : " << diaac << endl << endl;
	return 0; 
}

int calcular_edad(int da, int ma, int aa, int dn, int mn, int an)
{    
	int edad = aa - an;
	int mesac, diaac;
	if(ma < mn)
		edad--;
	else if(ma == mn && da < dn)
		edad--;
	return edad;
	
	if (da<dn){
		da=da+30;
	    ma=ma-1;
		diaac=da-dn;
	}
	else
		diaac=da-dn;
	return diaac;
	
	if (ma<mn){
		ma=ma+12;
		aa=aa-1;
		mesac=ma-mn;
	}
	else
		mesac=ma-mn;
	return mesac;
}                    

int bisiesto(int a) 
{
	if(a%4==0 && a%100 !=0 || a%400==0)
		return 1;
	else
		return 0;
}

int fecha_valida(int d, int m, int a) 
{
	if(d < 1 || d > 31 || m < 1 || m > 12 || a < 1)
	{
		return 0;
	}
	switch(m)
	{
	case 4:
	case 6:
	case 9:
	case 11: if(d > 30)
	{
		return 0;
	}
	break;
	case 2: if(bisiesto(a))
	{
		if(d > 29)
		{
			return 0;
		}
	}
	else if(d > 28)
	{
		return 0;
	}
	break;
	}
	return 1;
}
