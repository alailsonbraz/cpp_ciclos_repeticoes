#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int n1, n2;

	printf("Informe o primeiro número: ");
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	scanf("%d", &n2);

	if (n1 > n2) {
		printf("O numero %d é maior que o número %d!", n1, n2);
	}
	else if (n1 == n2) {
		printf("Os números sao iguais!");
	}
	else {
		printf("O número %d é maior que o número %d!", n2, n1);
	}
}
