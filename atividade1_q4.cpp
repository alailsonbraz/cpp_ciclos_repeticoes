#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

	int nota[3], media;

	printf("Informe a primeira nota: ");
	scanf("%d", &nota[0]);

	printf("Informe a segunda nota: ");
	scanf("%d", &nota[1]);
	
	printf("Informe a terceira nota: ");
	scanf("%d", &nota[2]);

	media = (nota[0]+nota[1]+nota[3])/3;

	if (media >=10) {
		printf("APROVADO!!!");
	}
	else{
		printf("REPROVADO!!!");
	}
}
