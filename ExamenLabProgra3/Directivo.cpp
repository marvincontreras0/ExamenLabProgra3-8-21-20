#include "Directivo.h"
#include <iostream>

using std::cout;

Directivo::Directivo() : categoria("N/d"), Persona() {

}

Directivo::Directivo(string _nombre, int _edad, float _salario, string _categoria) : Persona(_nombre, _edad) {
	setCategoria(_categoria);
	setSalario(_salario);

}

Directivo::~Directivo() {

}

void Directivo::setCategoria(string _categoria) {
	this->categoria = _categoria;
}

void Directivo::setSalario(float sal) {
	this->salario = sal;
}

void Directivo::AddSub(Empleado emp) {
	Subordinados.push_back(emp);
}

void Directivo::imprimirSub() {
	for (int i = 0; i < Subordinados.size(); i++)
	{
		Subordinados[i].Mostrar();
	}
}

string Directivo::getCategoria() {
	return this->categoria;
}

float Directivo::getSalario() {
	return this->salario;
}



