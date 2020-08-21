#include "Persona.h"
#include "Directivo.h"
#include "Empleado.h"
#include "Empresa.h"
#include "Cliente.h"
#include <conio.h>
#include <iostream>

int main() {
	Persona* personal[5];
	

	personal[0] = new Persona("Marvin", 26);
	personal [1] = new Empleado("Orlando", 27, 12000.0);
	personal [3] = new Empleado("Angel", 28, 35000.0);
	personal [4] = new  Cliente("Rolando", 28, "Cargill", 9875421);


	for (int i = 0; i < 1; i++)
	{
		personal[i]->mostrarP();

	}

	_getch();



	




}
