#include <iostream>
#include <string>
using namespace std;
 
#define MAX 100

int main(){	
	setlocale(LC_CTYPE, "Portuguese");
	
	float medias[MAX], media;
	int cont=0;
	string nomeAluno[MAX], resultado[MAX], resultadoImpressao[MAX];
	
	do{
		cout<<"Insira o nome do aluno: ";
		cin>>nomeAluno[cont];
		cout<<"Informe a média do aluno ou 0 para terminar: ";
		cin>>media;
		
		if(media==0){
			break;
			
		}else{
			medias[cont]=media;
			if(media>= 9.5){
				resultado[cont]="Aprovado";
			}
			else if(media<= 7.0){
				resultado[cont]="Reprovado";
			}else{
				resultado[cont]="Exame de recurso";
			}
			cont++;
		}
	}
	while(media!=0);
	
	for(int i=0;i<cont;i++){
		cout<< nomeAluno[i] <<" - "<< medias[i] <<" - "<<resultado[i]<<endl;
	}			
	
	system("pause");
	return 0;	
}
