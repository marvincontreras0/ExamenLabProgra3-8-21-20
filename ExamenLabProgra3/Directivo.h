#pragma once
#ifndef _DIRECTIVO_H
#define _DIRECTIVO_H
#include "Persona.h"
#include "Empleado.h"
#include <vector>

class Directivo : public Persona {

private: 
	string categoria;
	int salario;
	vector<Empleado> Subordinados;

public:
	Directivo();
	Directivo(string, int, float, string);

	~Directivo();

	void setCategoria(string);
	void AddSub(Empleado);
	void setSalario(float);

	float getSalario();
	string getCategoria();
	int getEmpleado(int);
	void imprimirSub();

	void Mostrar();



};







#endif // !_DIRECTIVO_H
