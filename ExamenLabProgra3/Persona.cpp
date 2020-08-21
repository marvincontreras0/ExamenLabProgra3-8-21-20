#include "Persona.h"

#include <iostream>

using std::cout;

Persona::Persona() :
	nombre("ND"), edad(-1)
{
	cout << "Se creo Persona\n";
}

Persona::Persona(string _nombre, int _edad): nombre(_nombre), edad(_edad){

}

Persona::~Persona()
{
	
}

void Persona::setNombre(string _nombre)
{
	this->nombre = _nombre;
}

void Persona::setEdad(int _edad)
{
	this->edad = _edad;
}

string Persona::getNombre(void)
{
	return this->nombre;
}

int Persona::getEdad(void)
{
	return this->edad;
}


void Persona::mostrarP(void)
{
	cout << "Persona { nombre: " << getNombre() << ", edad: " << getEdad()<< " }\n";
}


