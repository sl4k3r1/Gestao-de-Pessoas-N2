#include "Fornecedor.h"



Fornecedor::Fornecedor(string nome, float credito, float dividida)
{
	this->nome = nome;
	this->credito = credito;
	this->dividida = dividida;
}

void Fornecedor::FornDetalhes()
{
	cout << "Fornecedor - " << nome <<  " - (Dividida)" << dividida << " - (Credito)" << credito << "%\n";
}

void Fornecedor::setFornecedor(string n, float c, float d)
{
	nome = n;
	credito = c;
	dividida = d;
}
