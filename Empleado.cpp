#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : Persona{
	  //atributos
	  private : string codigo_empleado, puesto;
	  public : 
             Cliente(){
             }
             Cliente (string nom,string ape, string dir,string fe_n, int tele, string codigoemp, string pues) : Persona(nom,ape,dir,fe_n,tele){
                        codigo_empleado = codigoemp;
                        puesto = pues;
             }
             void leer(){
             	cout<<codigo_empleado<<endl;
             	cout<<puesto<<endl;
                  cout<<nombres<<endl;
                  cout<<apellidos<<endl;
                  cout<<direccion<<endl;
                  cout<<telefono<<endl;
                  cout<<fecha_nacimiento<<endl;
                  }     
	  };
