#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int vet[3];

	printf("Informe o primeiro número: ");
	scanf("%d", &vet[0]);

	printf("Informe o segundo número: ");
	scanf("%d", &vet[1]);
	
	printf("Informe o terceiro número: ");
	scanf("%d", &vet[2]);

	if (vet[0] > vet[1] && vet[0]>vet[2]) {
		printf("O numero %d é maior de todos!", vet[0]);
	}
	else if (vet[1] > vet[0] && vet[1]>vet[2]) {
		printf("O numero %d é maior de todos!", vet[1]);
	}
	else if (vet[0] == vet[1] && vet[0]== vet[2]){
		printf("Os números são iguais");
	}
	else{
		printf("O numero %d é maior de todos!", vet[2]);
	}
}
