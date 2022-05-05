
//3. Elabore un programa que solicite ingresar una hora del día 
	//(HH:MM en formato de cadena), solicite un tiempo en minutos a agregar, y retorne la hora 
	//de finalización (el formato de salida debe de estar en AM o PM según corresponda).
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int hh,mm,add,extra,newhoras;
	cout<<"Ingrese la hora: "; cin>>hh;
	cout<<"Ingrese los minutos: "; cin>>mm;
	cout<<hh<<":"<<mm<<endl;
	if (hh>25){
		hh=hh%24;
		cout<<"Se ha recorrido un dia";
	}
	else if (hh<25 && hh>12){
		hh=hh-12;
		cout<<"La hora es: "<<hh<<"PM";
	}
	else {
		hh;
	}
	cout<<"¿Cuantos minutos desea agregar? "; cin>>add;
	extra=add+mm;
		
		if (60<=extra){
			newhoras=extra/60;
			mm=extra%60;
			hh=hh+newhoras;
	      }
		else {
			mm;
		}
		if (hh<25 && hh>12){
			cout<<"Su hora es: "<<hh<<":"<<mm<<"PM"<<endl;
		}
		else{
			cout<<"Su hora es: "<<hh<<":"<<mm<<"AM"<<endl;
		}

	
	return 0;
}

