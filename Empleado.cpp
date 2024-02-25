//Proyecto en Grupo
// AXEL ALVAREZ, PAULA SEGURA, HENRY GONZALEZ
#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona {
		//Atributos: puesto y codigo de empleado
	private : string puesto;
	int codigo_empleado;
	
	// constructor
	public : 
	Empleado(){
	}
	Empleado(string nom, string ape, string dir, int tel, string fn, string puesto, int cod_empleado) : Persona(nom,ape,dir,tel,fn){
		puesto = puesto;
		cod_empleado = codigo_empleado;
	}
	
	
};
