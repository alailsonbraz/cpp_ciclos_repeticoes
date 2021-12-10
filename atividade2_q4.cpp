#include <iostream>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "Portuguese");

	int ano, condicao1=400, condicao2=4, condicao3=100;

	printf("Informe o ano: ");
	scanf("%d", &ano);
	
	if(ano%condicao1 == 0 || (ano%condicao2 == 0 && ano%condicao3 != 0)){
		printf(" O ano %d é bixesto!", ano);
	}else{
			printf(" O ano %d não é bixesto!", ano);
	}
}
