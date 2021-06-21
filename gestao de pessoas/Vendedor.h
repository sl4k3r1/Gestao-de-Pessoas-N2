#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Funcionario.h"

class Vendedor : public Funcionario
{
	public:
		Vendedor();
		void venDetalhes();
		float setComissao(float comissao);
		float setValor(float valorVendas);
		float setSalarioVend(float salarioVen);
		float setValor_Vendas(float vendas);
		
	protected:
		float comissao;
		float valorVendas;
		float salarioVen;
		float vendas;
		Funcionario func;
};

#endif
