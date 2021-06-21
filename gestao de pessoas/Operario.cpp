#include "Operario.h"

void Operario::opDetalhes(){
	cout << nome << " - " << endereco << " - " << complemento << " -(Num) " << num << " -(Comissao:) " << comissaoOp << " -(salario:) " << salarioOp << "Extras: (cod setor)" << cod_setor << " - (salario base)" << salario_base << " - (IR)" << imposto << "%" << " - (INSS)" << INSS << "%\n";
}
float Operario::setComissaoOp(float comissaoOp){
	float sal;
	func.salario_base=sal;
	this->comissaoOp= sal/3;
}
float Operario::setSalarioOp(float salarioOp){
	float sal;
	func.salario_base=sal;
	float v=(sal*func.INSS)/100;
	float x=(sal*func.imposto)/100;
	this->salarioOp= (sal+comissaoOp)-(v+x);	
}
float Operario::setValor_Produ(float produ){
	this->produ=produ;
}
