#include <iostream>	
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	float vencimento, irs, liquido;
	char nome[20], casado;
	
	cout<<"Informe o nome: "<<endl;
	cin>>nome;
	
	cout<<"Informe o vencimento: "<<endl;
	cin>>vencimento;
	
	cout<<"É casado? (S/N): "<<endl;
	cin>>casado;
	
	switch(toupper(casado)){
		case 'S':
			if(vencimento>=1000){
				irs=0.05;
				liquido=vencimento-(vencimento*irs);
				printf("Resultado para %s\n", nome);
				printf("Vencimento bruto: %.2f \n", vencimento);
				printf("Vencimento líquido: %.2f \n", liquido);
				printf("Taxa IRS aplicada: %.2f % \n", irs*100);
			}else{
				irs=0.0;
				liquido=vencimento-(vencimento*irs);
				printf("Resultado para %s\n", nome);
				printf("Vencimento bruto: %.2f \n", vencimento);
				printf("Vencimento líquido: %.2f \n", liquido);
				printf("Taxa IRS aplicada: %.2f % \n", irs*100);
			}
			break;
		case 'N':
		if(vencimento>=1000){
				irs=0.1;
				liquido=vencimento-(vencimento*irs);
				printf("Resultado para %s\n", nome);
				printf("Vencimento bruto: %.2f \n", vencimento);
				printf("Vencimento líquido: %.2f \n", liquido);
				printf("Taxa IRS aplicada: %.2f % \n", irs*100);
			}else{
				irs=0.03;
				liquido=vencimento-(vencimento*irs);
				printf("Resultado para %s\n", nome);
				printf("Vencimento bruto: %.2f \n", vencimento);
				printf("Vencimento líquido: %.2f \n", liquido);
				printf("Taxa IRS aplicada: %.2f % \n", irs*100);
			}
			break;
		default:
			cout<<"Opção inválida!";
	}
	
	system("pause");				
	return 0;
}
