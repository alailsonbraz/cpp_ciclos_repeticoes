#include <iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	char operacao, continuar='s';
	float a, b;
	
	printf("Insira o primeiro n�mero:");
	scanf("%f", &a);
	printf("Insira o segundo n�mero:");
	scanf("%f", &b);
	
    while (tolower(continuar) == 's'){
		printf("Selecione a opera��o (+, -, x ou /):");
		scanf("%s", &operacao);

		switch (tolower(operacao)){
			case '+':
				printf("O resultado da soma de %.2f e %.2f �: %.2f", a, b, a+b);
				break;
			case '-':
				printf("O resultado da subtra��o de %.2f e %.2f e: %.2f", a, b, a-b);
				break;
			case 'x':
				printf("O resultado da multiplica��o de %.2f e %.2f e: %.2f", a, b, a*b);
				break;
			case '/':
				printf("O resultado da divis�o de %.2f e %.2f e: %.2f", a, b, a/b);
				break;
			default:
				printf("Opera��o inv�lida!!!\n");
			}
	printf("Deseja tentar novamente? (s/n)");
	scanf("%s", &continuar);
	}
}
