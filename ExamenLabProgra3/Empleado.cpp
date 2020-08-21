#include "Empleado.h"

#include <iostream>

using std::cout;

Empleado::Empleado() :sueldo_bruto(0.0f), Persona(){
	cout << "...Se construyo Empleado...\n";
}

Empleado::Empleado(string _nombre, int _edad,float _salario) :Persona(_nombre, _edad){
	cout << "Empleado Creado\n";	
	setSueldo_bruto(_salario);
}

Empleado::~Empleado(){
	
}


void Empleado::setSueldo_bruto(float _salario)
{
	this->sueldo_bruto = _salario;
}



float Empleado::getSueldo_Bruto(void)
{
	return this->sueldo_bruto;
}


void Empleado::Mostrar(){
	this->mostrarP();
	cout << "Empleado { Salario: " <<" }\n";
}


