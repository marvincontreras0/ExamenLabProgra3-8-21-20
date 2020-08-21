#include "Empresa.h"

Empresa::Empresa() {

}

void Empresa::agregarCliente(Cliente client) {
	ListaClientes.push_back(client);
}

void Empresa::agregarEmpleado(Empleado Emp) {
	ListaEmpleados.push_back(Emp);
}