#include <iostream>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	float consumo, percurso;
	char tipoVeiculo;
	
	cout<<"Informe o tipo de veículo (A, B, OU C): ";
	cin>>tipoVeiculo;
	
	cout<<"Informe o percurso em KM: ";
	cin>>percurso;
	
	switch (toupper(tipoVeiculo)){
		case 'A':
			consumo=percurso/8.0;
			printf("O consumo para os dados informado é de : %.2f litros."", consumo);
			break;
		
		case 'B':
			consumo=percurso/9.0;
			printf("O consumo para os dados informado é de : %.2f litros."", consumo);
			break;
			
		case 'C':
			consumo=percurso/12.0;
			printf("O consumo para os dados informado é de : %.2f litros."", consumo);
			break;
		default:
			cout<<"Tipo de veículo inválido!";
	}		
	return 0;
}

