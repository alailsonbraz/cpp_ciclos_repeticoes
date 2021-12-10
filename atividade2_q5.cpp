#include <iostream>
#include<string.h>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "Portuguese");

	int result1, result2, result3;
	char palavraCerta1[]="brasil", palavraInformada[6]="", palavraCerta2[]="BRASIL", palavraCerta3[]="Brasil";

	result1 = strcmp(palavraInformada, palavraCerta1);
	result2 = strcmp(palavraInformada, palavraCerta2);
	result3 = strcmp(palavraInformada, palavraCerta3);
	
	if(result1 !=0 || result2!=0 || result3!=0){
		printf("Primeira dica: País da américa do Sul: ");
		scanf("%s", palavraInformada);
		result1 = strcmp(palavraInformada, palavraCerta1);
		result2 = strcmp(palavraInformada, palavraCerta2);
		result3 = strcmp(palavraInformada, palavraCerta3);
		if(result1 ==0 || result2==0 || result3==0){
			printf("Resposta Certa!!!");
		}else
			printf("Resposta errada! >>> Segunda dica: Maior produtor mundial de café: ");
			scanf("%s", palavraInformada);
			result1 = strcmp(palavraInformada, palavraCerta1);
			result2 = strcmp(palavraInformada, palavraCerta2);
			result3 = strcmp(palavraInformada, palavraCerta3);
				if(result1 ==0 || result2==0 || result3==0){
				printf("Resposta Certa!!!");	
				
				}else{
					printf("Resposta errada!!! A palavra certa era %s: \n", palavraCerta1);
				}
		}
	system("PAUSE");
}

