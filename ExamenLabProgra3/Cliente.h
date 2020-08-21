#pragma once
#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"
class Cliente : public Persona {

protected: 
	string empresa;
	int NumeroT;

public:
	Cliente(string, int, string,int);
	Cliente();
	~Cliente();
	void Mostrar(void);

	void SetEmpresa(string);
	void SetNumero(int);

	string GetEmpresa(void);
	int getNumero(void);



};








#endif // !CLIENTE_H

