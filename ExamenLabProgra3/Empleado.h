#pragma once
#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"

class Empleado : public Persona
{
protected:
	float sueldo_bruto;

public:
	Empleado();
	Empleado(string, int, float);

	~Empleado();

	void setSueldo_bruto(float);

	float getSueldo_Bruto(void);


	void Mostrar(void);

	

};

#endif // !EMPLEADO_H
