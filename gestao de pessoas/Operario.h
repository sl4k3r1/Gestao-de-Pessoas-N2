#ifndef OPERARIO_H
#define OPERARIO_H

#include "Funcionario.h"

class Operario : public Funcionario
{
	public:
		Operario(){};
		void opDetalhes();
		float setComissaoOp(float comissaoOp);
		float setSalarioOp(float salarioOp);
		float setValor_Produ(float produ);
	protected:
		float comissaoOp;
		float produ;
		float salarioOp;
		Funcionario func;
};

#endif
