#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <istream>
#include <fstream>

using namespace std;

class Pessoa
{

public:
	Pessoa();
	Pessoa(string nome, string endereco, int complemento, int num);
	void pesDetalhes();
	void setEndereco(string endereco);
	void setComplemento(int complemento);
	void setNum(int num);
	void setNome(string nome);

protected:
	string nome;
	string endereco;
	int complemento;
	int num;


};

#endif // !Pessoa_h
