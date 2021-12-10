#include <iostream>	
using namespace std;

int main(){	
	setlocale(LC_CTYPE, "Portuguese");
						
	int casd=0, solt=0, viu=0, divor=0, idade, idadeViu=0, somaPessoas;
	float mediaViu, porcDivor;
	char cond;

	do{
		cout<<"Informe a idade: ";
		scanf("%d", &idade);
		if(idade<0)
			break;
		
		somaPessoas++;
		
		fflush(stdin);
		cout<<"Informe o estado civíl: (CASADO=C / SOLTEIRO=S / VIÚVO=V, DIVORCIADO=D"<<endl;
		scanf("%c", &cond);
		
		switch (toupper(cond)){
			case 'C':
				casd++;
				break;
			case 'S':
				solt++;
				break;
			case 'V':
				idadeViu=idadeViu+idade;	
				viu++;	
				break;
			case 'D':
				viu++;
				break;
			default:
				cout<<"Opção Inválida!";
				break;
		}
	}
	while(idade>0);
	
	cout<<"A Quantidade de pessoas casadas é de: "<<casd<<endl;
	cout<<"A Quantidade de pessoas solteiras é de: "<<solt<<endl;
	
	if(viu != 0){
		mediaViu = idadeViu/(viu-1);
		printf("Media de idade dos viuvos: %.2f\n", mediaViu);
	}
	
	porcDivor=(divor+solt)/somaPessoas;
	printf("A percentagem de pessoas divorciadas ou separadas dentre todas as pessoas analisadas: %.2F\n", porcDivor);
	
    system("pause");				
	return 0;	
}
