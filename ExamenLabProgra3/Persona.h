#pragma once
#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona{
protected:
	string nombre;
	int edad;
	

public:
	//Constructores
	Persona();
	Persona(string, int);

	~Persona();

	void setNombre(string);
	void setEdad(int);

	string getNombre(void);
	int getEdad(void);
	void mostrarP(void);

	

};


#endif // !PERSONA_H