#include <iostream>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "Portuguese");

	float numero;

	printf("Informe o número: ");
	scanf("%f", &numero);
	
		if (numero < 10) {
			printf("O número informado é menor que 10");
		}
		else if(numero > 10){
				printf("O número informado é menor que 10");
		} else{
				printf("O número informado é igual a 10");
		}
	}

