#include "Cliente.h"
#include <iostream>

using std::cout;

Cliente::Cliente() :empresa("ND"), NumeroT(0), Persona() {

}

Cliente::Cliente(string _nombre, int _edad, string _empresa, int _numero) : Persona(_nombre, _edad) {
	cout << "Cliente Creado\n";
	SetEmpresa(_empresa);
	SetNumero(_numero);

}


void Cliente::SetEmpresa(string nombre) {
	this->empresa = nombre;
}

void Cliente::SetNumero(int num) {
	this->NumeroT = num;
}


string Cliente::GetEmpresa() {
	return this->empresa;
}

int Cliente::getNumero() {
	return this->NumeroT;
}
