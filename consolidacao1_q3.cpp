#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int vet[10], num, vetCopia[10], j=0;
	bool encontrado=false;
	
	cout<<"Vetor gerado aleat�riamente: { ";
	for (int i=0; i<10; i++){
		vet[i]=rand()%1000;
		cout<<vet[i] <<" ";
	}
	cout<<"}\n";
	
	cout<<"Informe um n�mero que deseja verificar no vetor:\n";
	cin>>num;
	
	for (int i=0; i<10; i++){
		
			if(num==vet[i]){
				cout<<"N�mero encontrado na posi��o " << i <<endl;
				encontrado=true;
			}	
	}
	if(!encontrado){
		cout<<"N�mero n�o encontrado\n";
	}
	
	for (int i=0; i<10; i++){	
			if(vet[i]%2==0){
				vetCopia[j]=vet[i];
				j++;
			}	
	}
	
	cout<<"Vetor s� com os pares: { ";
	for (int i=0; i<j; i++){		
			cout<<vetCopia[i] <<" ";
			}	
	cout<<"}\n";
	return 0;
}

