#include <iostream>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "Portuguese");

	float numero;

	printf("Informe o n�mero: ");
	scanf("%f", &numero);
	
		if (numero < 10) {
			printf("O n�mero informado � menor que 10");
		}
		else if(numero > 10){
				printf("O n�mero informado � menor que 10");
		} else{
				printf("O n�mero informado � igual a 10");
		}
	}

