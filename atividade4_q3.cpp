#include <iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	char nome[10], perec, validade[20]="";
	float valorProduto, precoFinal, valorIva;
	int op;
	
	printf("Insira o nome do produto: ");
	scanf("%s", nome);
	
	printf("Insira o valor do produto: ");
	scanf("%f", &valorProduto);
	
	printf("Insira a op��o da taxa de IVA que dejesa aplicar: \n");
	printf("1 >>>> Reduzida: 6% \n");
	printf("2 >>>> Interm�dia: 13% \n");
	printf("3 >>>> Normal: 23% \n ");
	scanf("%d", &op);
		
	printf("Informe se o produto � perec�vel: (S/N) ");
	fflush(stdin);
	scanf("%c", &perec);
		if(tolower(perec) == 's'){
			printf("Informe a data de validade:  ");
			scanf("%s", validade);
		}
			
	switch (op){
		case 1:
			
			valorIva = valorProduto*0.06;
			precoFinal = valorProduto + valorIva;
			printf("O pre�o final do(a) %s � de %.2f euros e o valor de IVA aplicado foi de %.2f euros. \n", nome, precoFinal, valorIva);
				if(tolower(perec == 's')){
					printf("*** Produto perec�cel. Data de validade: %s ***", validade);
				}else{
					printf("*** Produto n�o perec�cel!");
				}			
			break;
		case 2:
			
			valorIva = valorProduto*0.13;
			precoFinal = valorProduto + valorIva;
			printf("O pre�o final do(a) %s � de %.2f euros e o valor de IVA aplicado foi de %.2f euros. \n", nome, precoFinal, valorIva);
				if(tolower(perec == 's')){
					printf("*** Produto perec�cel. Data de validade: %s ***", validade);
				}else{
					printf("*** Produto n�o perec�cel!");
				}	
			break;
		case 3:
		
			valorIva = valorProduto*0.23;
			precoFinal = valorProduto + valorIva;
			printf("O pre�o final do(a) %s � de %.2f euros e o valor de IVA aplicado foi de %.2f euros. \n", nome, precoFinal, valorIva);
				if(tolower(perec == 's')){
					printf("*** Produto perec�cel. Data de validade: %s ***", validade);
				}else{
					printf("*** Produto n�o perec�cel!");
				}	
			break;
		default:
			printf("Op��o de taxa de IVA inv�lida!");
	}
}
