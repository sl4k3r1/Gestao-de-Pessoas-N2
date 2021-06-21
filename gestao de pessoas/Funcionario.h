#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "Pessoa.h"

class Funcionario : public Pessoa
{
public:
	Funcionario();
	Funcionario(int cod_setor,float s, float imposto, float INSS);
	void Detalhes();
	float setINSS(float INSS);
	float setImposto(float imposto);
	void setSalario_Base(float s);
	void setCod_setor(int cod_setor);

protected:
	int cod_setor;
	float salario_base;
	float imposto;
	float INSS;
};

#endif // !Funcionario_h


