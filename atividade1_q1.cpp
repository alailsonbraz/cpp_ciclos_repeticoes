#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int n1, n2;

	printf("Informe o primeiro n�mero: ");
	scanf("%d", &n1);

	printf("Informe o segundo n�mero: ");
	scanf("%d", &n2);

	if (n1 > n2) {
		printf("O numero %d � maior que o n�mero %d!", n1, n2);
	}
	else if (n1 == n2) {
		printf("Os n�meros sao iguais!");
	}
	else {
		printf("O n�mero %d � maior que o n�mero %d!", n2, n1);
	}
}
