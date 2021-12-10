#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3;

	printf("Informe o primeiro número: ");
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	scanf("%d", &n2);
	
	printf("Informe o terceiro número: ");
	scanf("%d", &n3);

	if (n1 > n2 && n1>n3) {
		printf("O numero %d é maior de todos!", n1);
	}
	else if (n2 > n1 && n2>n3) {
		printf("O numero %d é maior de todos!", n2);
	}
	else if (n1 == n2 && n1== n3){
		printf("Os números são iguais");
	}
	else{
		printf("O numero %d é maior de todos!", n3);
	}
}
