#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int vet[10], num;
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
	
return 0;
}

