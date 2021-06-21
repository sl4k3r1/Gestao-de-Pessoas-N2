#ifndef FORNECEDOR_H
#define FORNECEDOR_H

#include "Pessoa.h"

class Fornecedor : public Pessoa
{
public:
	Fornecedor() {};
	Fornecedor(string nome, float credito, float dividida);
	void FornDetalhes();
	void setFornecedor(string nome, float credito, float dividida);

protected:
	string nome;
	float credito;
	float dividida;
};

#endif
