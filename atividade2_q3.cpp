#include <iostream>
#include<string.h>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "Portuguese");

	int idade, result;
	char nome[10], sexoInformado[10], sexoExigido[10]="feminino";

	printf("Informe o nome: ");
	scanf("%s", nome);
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	printf("Informe o sexo : ");
	scanf("%s", sexoInformado);
	
	result = strcmp(sexoInformado, sexoExigido);
	
	if(idade < 25 && result==0){
		printf(" O candidato %s atende aos requisitos exigidos!", nome);
	}else{
			printf("O candidado não atende aos requisitos!");
	}
}

