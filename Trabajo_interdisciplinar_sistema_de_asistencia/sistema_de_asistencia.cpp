//hhola
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

// PERSONA
class Persona{
protected:
    string nombre;
    int cui;
public:
    Persona(string, int);
    void mostrar();
};

Persona::Persona(string n,int e){
    nombre=n;
    cui=e;
}

// ALUMNO
class Alumno:public Persona{
protected:
    string especialidad;
public:
    Alumno(string,int,string);
    string getNombre() { return nombre ;}
    int getEdad() { return cui ;}
    string getEspecialidad() { return especialidad ;}
};

Alumno::Alumno(string n,int e,string esp):Persona(n,e){
    especialidad=esp;
}

// PROFESOR


// ADMINISTRATIVO


//////////////////////////////////////////////////////////////////////////////////
int main(){
    Alumno *ListaAlumnos[10];
    int opc, cont1 = 0, cont2 = 0, cont3 = 0;

    do{
        cout<<"\n 1 >> Agregar Alumno\n";
        cout<<" 2 >> Ver lista de Alumnos\n";
        cout<<" 3 >> SALIR >> \n";
        cout<<"\n\n  OPCION: "; cin>>opc;
        if(opc==1){
            string nom, especialidad;
            int edad;
            cout<<"\n Alumno>> "<<endl;
            cout<<"   > Nombre Completo:       ";cin>>nom;
            cout<<"   > CUI:         ";cin>>edad;
            cout<<"   > Fecha: ";cin>>especialidad;
            cout<<endl;
            ListaAlumnos[cont1]=new Alumno(nom, edad , especialidad);
            cont1++;
        }else if(opc==2){
            cout<<"\n LISTA DE ALUMNOS>>>>>>>>>>>>>>>>>>>>>>>>> \n";
            for(int j=0; j<cont1; j++){
                cout<<"\n   ALUMNO "<<j+1<<" >> "<<endl;
                cout<<"     > Nombre:         "<<ListaAlumnos[j]->getNombre();
                cout<<"     > CUI:           "<<ListaAlumnos[j]->getEdad();
                cout<<"     > Fecha:   "<<ListaAlumnos[j]->getEspecialidad();
                cout<<endl;
            }

        }

    }while(opc!=3);

    return 0;
}
