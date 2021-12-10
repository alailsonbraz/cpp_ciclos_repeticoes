#include <iostream>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "Portuguese");

	float salario, taxaEsforco=0.25, prestacao, result;

	printf("Informe o salário: ");
	scanf("%f", &salario);

	printf("Informe a prestação mensal: ");
	scanf("%f", &prestacao);

	result = salario*taxaEsforco;
	
	if (prestacao < result) {
		printf("Empréstimo concedido!");
	}
	else{
		printf("Empréstimo não concedido!");
	}
}
