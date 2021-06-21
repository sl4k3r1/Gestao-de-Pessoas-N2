#include "Funcionario.h"

Funcionario::Funcionario() 
{

}

Funcionario::Funcionario(int cod_setor, float s, float imposto, float INSS)
{
	this->cod_setor = cod_setor;
	salario_base = s >= 0 ? s : 0.0;
	this->imposto =imposto;
	this->INSS = INSS;
}
void Funcionario::setSalario_Base(float s){
	salario_base = s >= 0 ? s : 0.0;
}
void Funcionario::setCod_setor(int cod_setor){
	this->cod_setor = cod_setor;
}
float Funcionario::setImposto(float imposto)
{
	if(salario_base <= 1903,99)
	{
		imposto = 0;
	}else if (2826,65 > salario_base >= 1903,99)
	{
		imposto = 7.5;
	}else if (3751,05 > salario_base >= 2826,65)
	{
		imposto = 15;
	}else if (4664,68 > salario_base >= 3751,05)
	{
		imposto = 22.5;
	}else if (salario_base >= 4664,68)
	{
		imposto = 27.5;
	}
}
float Funcionario::setINSS(float INSS)
{
	if (1830,29 >= salario_base)
	{
		INSS = 8;
	}
	else if (3050,52 > salario_base > 1830,29)
	{
		INSS = 9;
	}
	else if (6101,06 > salario_base >= 3050,52)
	{
		INSS = 11;
	}
}

void Funcionario::Detalhes()
{
	cout << "Funcionario " << cod_setor << " - " << nome << " - " << salario_base << " - (IR)" << imposto << "%" << " - (INSS)" << INSS << "%\n";
}


