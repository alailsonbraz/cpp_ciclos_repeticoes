#include <iostream>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "Portuguese");

	float salario, taxaEsforco=0.25, prestacao, result;

	printf("Informe o sal�rio: ");
	scanf("%f", &salario);

	printf("Informe a presta��o mensal: ");
	scanf("%f", &prestacao);

	result = salario*taxaEsforco;
	
	if (prestacao < result) {
		printf("Empr�stimo concedido!");
	}
	else{
		printf("Empr�stimo n�o concedido!");
	}
}
