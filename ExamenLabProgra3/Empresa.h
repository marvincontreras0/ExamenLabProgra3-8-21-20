#pragma once
#ifndef _EMPRESA_H
#define _EMPRESA_H
#include "Cliente.h"
#include "Empleado.h"
#include <vector>
#endif // !_EMPRESA_H

class Empresa
{


public:
	Empresa();
	~Empresa();

private:
	vector <Cliente> ListaClientes;
	vector <Empleado> ListaEmpleados;

	void agregarCliente(Cliente);
	void agregarEmpleado(Empleado);

};
