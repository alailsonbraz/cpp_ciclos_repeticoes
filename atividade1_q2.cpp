#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3;

	printf("Informe o primeiro n�mero: ");
	scanf("%d", &n1);

	printf("Informe o segundo n�mero: ");
	scanf("%d", &n2);
	
	printf("Informe o terceiro n�mero: ");
	scanf("%d", &n3);

	if (n1 > n2 && n1>n3) {
		printf("O numero %d � maior de todos!", n1);
	}
	else if (n2 > n1 && n2>n3) {
		printf("O numero %d � maior de todos!", n2);
	}
	else if (n1 == n2 && n1== n3){
		printf("Os n�meros s�o iguais");
	}
	else{
		printf("O numero %d � maior de todos!", n3);
	}
}
