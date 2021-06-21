#include "Admin.h"

Admin::Admin(){
}

Admin::Admin(float custo,float salarioAdm)
{
	this->salarioAdm=salarioAdm;
	this->custo=custo;
}
void Admin::admDetalhes(){
	cout << nome << " - " << endereco << " - " << complemento << " -(Num) " << num << " -(custo de ajuda_Fixo:) " << custo << " -(salario:) " << salarioAdm << "Extras: (cod setor)" << cod_setor << " - (salario base)" << salario_base << " - (IR)" << imposto << "%" << " - (INSS)" << INSS << "%\n";
}

float Admin::setAjuda(float custo){
	custo=custo;
	this->custo=2000;
}
float Admin::setSalario(float salarioAdm){
	float sal;
	func.salario_base=sal;
	float v=(sal*func.INSS)/100;
	float x=(sal*func.imposto)/100;
	this->salarioAdm= (sal+custo)-(v+x);
	
}
