#include <iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	char nome[20]="";
	float valorProduto, precoFinal, valorIva;
	int op;
	
	printf("Insira o nome do produto: ");
	scanf("%s", nome);
	
	printf("Insira o valor do produto: ");
	scanf("%f", &valorProduto);
	
	printf("Insira a opção da taxa de IVA que dejesa aplicar: \n");
	printf("1 >>>> Reduzida: 6% \n");
	printf("2 >>>> Intermédia: 13% \n");
	printf("3 >>>> Normal: 23% \n ");
	scanf("%d", &op);
		
	switch (op){
		case 1:
			valorIva = valorProduto*0.06;
			precoFinal = valorProduto + valorIva;
			printf("O preço final do(a) %s é de %.2f euros e o valor de IVA aplicado foi de %.2f euros.", nome, precoFinal, valorIva);
			break;
		case 2:
			valorIva = valorProduto*0.13;
			precoFinal = valorProduto + valorIva;
			printf("O preço final do(a) %s é de %.2f euros e o valor de IVA aplicado foi de %.2f euros.", nome, precoFinal, valorIva);
			break;
		case 3:
			valorIva = valorProduto*0.23;
			precoFinal = valorProduto + valorIva;
			printf("O preço final do(a) %s é de %.2f euros e o valor de IVA aplicado foi de %.2f euros.", nome, precoFinal, valorIva);
			break;
		default:
			printf("Opção de taxa de IVA inválida!");
	}
	
}
