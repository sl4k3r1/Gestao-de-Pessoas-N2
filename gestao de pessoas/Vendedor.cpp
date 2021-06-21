#include "Vendedor.h"

Vendedor::Vendedor(){
	
}
void Vendedor::venDetalhes(){
	cout << nome << " - " << endereco << " - " << complemento << " -(Num) " << num << " -(Vendas:) "<< vendas << " -(Comissao:) " << comissao << " -(salario:) " << salarioVen << "Extras: (cod setor)" << cod_setor << " - (salario base)" << salario_base << " - (IR)" << imposto << "%" << " - (INSS)" << INSS << "%\n";
}
float Vendedor::setComissao(float comissao){
	comissao= salario_base/6;
}
float Vendedor::setSalarioVend(float salarioVen){
	float sal;
	func.salario_base=sal;
	float v=(sal*func.INSS)/100;
	float x=(sal*func.imposto)/100;
	this->salarioVen= (sal+comissao)-(v+x);
}
float Vendedor::setValor_Vendas(float vendas){
	this->vendas= vendas;
}
