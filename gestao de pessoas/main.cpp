#include "Funcionario.h"
#include "Fornecedor.h"
#include "Pessoa.h"
#include "Admin.h"
#include "Vendedor.h"
#include "Operario.h"

#define MAX 5

int main() {

	setlocale(LC_ALL,"pt-br");
    int respostaUsuario;
    char resposta;
    Pessoa pesso;
    Funcionario func;
    Operario op;
    Admin adm;
    Vendedor vend;


    Inicio:

        cout<< "------------------"<<endl;
        cout<< "(1) Adicionar Pessoa/Funcionario"<<endl;
        cout<< "(2) Ver Fornecedores"<<endl;
        cout<< "(3) Ver Pessoas"<<endl;
        cout<< "(4) Ver Empregados"<<endl;
        cout<< "------------------"<<endl;
        cout<< "Escolha uma opcao valida: ";
        cin >> respostaUsuario;
		
		string n;
		string e;
		int c;
		int u;
		float sal;
		float pro;


		if(respostaUsuario == 1){
		
		Primeiro:
	        cout<<"Adicionar Pessoa"<<endl;
	                
	        cout<<"Essa pessoa e empregado?(S/N)";
	        cin>>resposta;
	                
			if(resposta == 'n'){
					
		    	cout<<"Nome: ";
		    	cin>>n;
		        pesso.setNome(n);
		
		        cout<<"Endereco: ";
		        cin >> e;
				pesso.setEndereco(e);
						
		    	cout<<"Complemento: ";
		        cin >> c;
		        pesso.setComplemento(c);
		
		        cout<<"Numero de telefone: ";
		    	cin >> u;
		        pesso.setNum(u);
		        cout <<"Quer adicionar mais um?(s/n)";
			       		cin >> resposta;
			        	if(resposta == 'n')
			       		{
			       			system("cls");
			            	goto Inicio;
						}else{
							system("cls");
							goto Primeiro;
						}
	            }else if (resposta=='s'){
	            	cout<<"O que ele faz?(1-Adm/2-Operario/3-Vendedor)";
	                cin>>respostaUsuario;
	                	
	                
	                if(respostaUsuario == 1){
			            cout<<"Nome: ";
				        cin>>n;
				        adm.setNome(n);
				        pesso.setNome(n);
				
				        cout<<"Endereco: ";
				        cin >> e;
						adm.setEndereco(e);
						pesso.setEndereco(e);
								
				        cout<<"Complemento: ";
				        cin >> c;
				        adm.setComplemento(c);
				        pesso.setComplemento(c);
				
				        cout<<"Numero de telefone: ";
				        cin >> u;
				        adm.setNum(u);
				        pesso.setNum(u);
				                
				        cout<<"Qual o salario? ";
				        cin >> sal;
				        adm.setSalario_Base(sal);
				        
						cout <<"Quer adicionar mais um?(s/n)";
			       		cin >> resposta;
			        	if(resposta == 'n')
			       		{
			       			system("cls");
			            	goto Inicio;
						}else{
							system("cls");
							goto Primeiro;
						}
					
					}else if(respostaUsuario==2){
			            cout<<"Nome: ";
				        cin>>n;
				        op.setNome(n);
				        pesso.setNome(n);
				
				        cout<<"Endereco: ";
				        cin >> e;
						op.setEndereco(e);
						pesso.setEndereco(e);
								
				        cout<<"Complemento: ";
				        cin >> c;
				        op.setComplemento(c);
				        pesso.setComplemento(c);
				
				        cout<<"Numero de telefone: ";
				        cin >> u;
				        op.setNum(u);
				        pesso.setNum(u);
				                
				        cout<<"Qual o salario? ";
				        cin >> sal;
				        op.setSalario_Base(sal);
				                
				        cout<<"Qual o valor da Producao? ";
				        cin >> pro;
				        op.setValor_Produ(pro);
				        
						cout <<"Quer adicionar mais um?(s/n)";
	       				cin >> resposta;
	        			if(resposta == 'n')
	       				{
	       					system("cls");
	            			goto Inicio;
						}else{
							system("cls");
							goto Primeiro;
						}
						
					}else if(respostaUsuario==3){
			            cout<<"Nome: ";
				        cin>>n;
				        vend.setNome(n);
				        pesso.setNome(n);
				
				        cout<<"Endereco: ";
				        cin >> e;
						vend.setEndereco(e);
						pesso.setEndereco(e);
								
				        cout<<"Complemento: ";
				        cin >> c;
				        vend.setComplemento(c);
				        pesso.setComplemento(c);
				
				        cout<<"Numero de telefone: ";
				        cin >> u;
				        vend.setNum(u);
				        pesso.setNum(u);
				                
				        cout<<"Qual o salario? ";
				        cin >> sal;
				        vend.setSalario_Base(sal);
				                
				        cout<<"Qual o valor da Producao? ";
				        cin >> pro;
				        vend.setValor_Vendas(pro);
			            
						cout <<"Quer adicionar mais um?(s/n)";
			       		cin >> resposta;
			        	if(resposta == 'n')
			       		{
			       			system("cls");
			            	goto Inicio;
						}else{
							system("cls");
							goto Primeiro;
						}							
						}
					}


			}else if(respostaUsuario == 2){

	    		Fornecedor forn[MAX];
	
	    		forn[0].setFornecedor("NIKE", 500, 100);
	    		forn[1].setFornecedor("Adidas", 700, 75);
	    		forn[2].setFornecedor("Puma", 400, 5);
	    		forn[3].setFornecedor("Fika", 1500, 13);
	    		forn[4].setFornecedor("Pamu", 100, 20);
	
	   		 	for (int i = 0; i < MAX; i++) {
	   		     	forn[i].FornDetalhes(); cout<< "\n";
	    		}
				cout <<"Quer continuar a mexer?(s/n)";
	       				 cin >> resposta;
	        		if(resposta == 'n')
	       			 {
	       			 	system("cls");
	            		return 0;
					}else
            			system("cls");
            			goto Inicio;
			}else if (respostaUsuario == 3){
	    		pesso.pesDetalhes(); cout<< "\n";
	    		
	    		cout <<"Quer continuar a mexer?(s/n)";
	       		cin >> resposta;
	        	if(resposta == 'n')
	       		{
	       			system("cls");
	            	return 0;
				}else
            		system("cls");
            		goto Inicio;
	    	}else if (respostaUsuario == 4){
	    		cout<< "ADMINISTRADORES\n";
				adm.admDetalhes(); cout<< "\n";
	    		cout<< "OPERARIOS\n";
	    		op.opDetalhes();cout<< "\n";
	    		cout<< "VENDEDORES\n";
	    		vend.venDetalhes();cout<< "\n";
	    		
	    		cout <<"Quer continuar a mexer?(s/n)";
	       		cin >> resposta;
	        	if(resposta == 'n')
	       		{
	       			system("cls");
	            	return 0;
				}else
            		system("cls");
            		goto Inicio;
	    	}
	return 0;
}


	

