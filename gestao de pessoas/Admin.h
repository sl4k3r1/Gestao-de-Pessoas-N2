#ifndef ADMIN_H
#define ADMIN_H

#include "Funcionario.h"

class Admin : public Funcionario
{
	public:
		Admin();
		Admin(float custo,float salarioAdm);
		float setAjuda(float custo);
		float setSalario(float salarioAdm);
		void admDetalhes();
		Funcionario func;
	protected:
		float custo;
		float salarioAdm;
		
};

#endif
