#include <iostream>	
using namespace std;
#define MAX 30
int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	float vComp[MAX], vVenda[MAX];
	int opcao, cod[MAX], qtd[MAX], codProc;
	
	for(int i=0; i<MAX; i++){
		cout<<"Informe o C�digo do produto " << i+1 <<":";
		cin>>cod[i];
		cout<<"Informe a quantidade do produto " << i+1 <<":";
		cin>>qtd[i];
		cout<<"Informe o Valor de compra do produto " << i+1 <<":";
		cin>>vComp[i];
		cout<<"Informe o Valor de venda do produto " << i+1 <<":";
		cin>>vVenda[i];		
	}
	cout<<"----------------*****-----------------"<<endl;
	cout<<"Selecione a op��o:"<<endl;
	cout<<"1 -> TODOS OS PRODUTOS"<<endl;
	cout<<"2 -> DIGITAR C�DIGO A PROCURAR"<<endl;
	cin>>opcao;
	
	switch(opcao){
		case 1:
			for(int i=0; i<MAX; i++){
				printf("Produto %d: C�digo: %d Quantidade: %d Valor de Compra: %.2f Euros Valor de Venda: %.2f Euros \n", cod[i], qtd[i], vComp[i], vVenda[i] );
			}
			break;
		case 2:
			cout<"Insira o c�digo: ";
			cin>>codProc;
			for(int i=0; i<MAX; i++){
				if(codProc==cod[i]){
					printf("Produto %d: C�digo: %d Quantidade: %d Valor de Compra: %.2f Euros Valor de Venda: %.2f Euros\n", cod[i], qtd[i], vComp[i], vVenda[i] );
				}else{
					cout<<"C�digo n�o encontrado!";
				}
			}
			break;
		default:
			cout<<"Op��o inv�lida!";
	}	
	system("pause");				
	return 0;
}
