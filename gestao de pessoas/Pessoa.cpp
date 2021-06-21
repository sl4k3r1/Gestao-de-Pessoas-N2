#include "Pessoa.h"



Pessoa::Pessoa()
{
}

Pessoa::Pessoa(string nome, string endereco, int complemento, int num)
{
	this->nome = nome;
	this->endereco = endereco;
	this->complemento = complemento;
	this->num = num;
}

void Pessoa::setNome(string nome)
{
	this->nome = nome;
}
void Pessoa::setEndereco(string endereco)
{
	this->endereco = endereco;
}
void Pessoa::setComplemento(int complemento)
{
	this->complemento = complemento;
}
void Pessoa::setNum(int num)
{
	this->num = num;
}

void Pessoa::pesDetalhes()
{
	cout << nome << " - " << endereco << " - " << complemento << " - " << num << "\n";
}

