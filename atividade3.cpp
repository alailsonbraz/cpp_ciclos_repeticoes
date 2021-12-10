#include <iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	char operacao, continuar='s';
	float a, b;
	
	printf("Insira o primeiro número:");
	scanf("%f", &a);
	printf("Insira o segundo número:");
	scanf("%f", &b);
	
    while (tolower(continuar) == 's'){
		printf("Selecione a operação (+, -, x ou /):");
		scanf("%s", &operacao);

		switch (tolower(operacao)){
			case '+':
				printf("O resultado da soma de %.2f e %.2f é: %.2f", a, b, a+b);
				break;
			case '-':
				printf("O resultado da subtração de %.2f e %.2f e: %.2f", a, b, a-b);
				break;
			case 'x':
				printf("O resultado da multiplicação de %.2f e %.2f e: %.2f", a, b, a*b);
				break;
			case '/':
				printf("O resultado da divisão de %.2f e %.2f e: %.2f", a, b, a/b);
				break;
			default:
				printf("Operação inválida!!!\n");
			}
	printf("Deseja tentar novamente? (s/n)");
	scanf("%s", &continuar);
	}
}
