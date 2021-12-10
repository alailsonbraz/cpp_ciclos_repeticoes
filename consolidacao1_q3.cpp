#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int vet[10], num, vetCopia[10], j=0;
	bool encontrado=false;
	
	cout<<"Vetor gerado aleatóriamente: { ";
	for (int i=0; i<10; i++){
		vet[i]=rand()%1000;
		cout<<vet[i] <<" ";
	}
	cout<<"}\n";
	
	cout<<"Informe um número que deseja verificar no vetor:\n";
	cin>>num;
	
	for (int i=0; i<10; i++){
		
			if(num==vet[i]){
				cout<<"Número encontrado na posição " << i <<endl;
				encontrado=true;
			}	
	}
	if(!encontrado){
		cout<<"Número não encontrado\n";
	}
	
	for (int i=0; i<10; i++){	
			if(vet[i]%2==0){
				vetCopia[j]=vet[i];
				j++;
			}	
	}
	
	cout<<"Vetor só com os pares: { ";
	for (int i=0; i<j; i++){		
			cout<<vetCopia[i] <<" ";
			}	
	cout<<"}\n";
	return 0;
}

