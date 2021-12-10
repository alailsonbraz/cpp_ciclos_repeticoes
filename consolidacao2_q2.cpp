#include <iostream>	
using namespace std;
#define MAX 10
int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int conj1[MAX], conj2[MAX];
	
	cout<<"Insira o primeiro conjunto de números: "<<endl;
	for(int i=0; i<MAX; i++){
		cout<< "Número "<<i+1<<":";
		cin>>conj1[i];
	}
	
	cout<<"Insira o segundo conjunto de números: "<<endl;
	for(int i=0; i<MAX; i++){
		cout<< "Número "<<i+1<<":";
		cin>>conj2[i];
	}
	
	for(int i=0; i<MAX; i++){
		for(int j=0; j<MAX; j++){
			if(conj1[i]==conj2[j]){
				printf("%d ", conj1[i]);
			}
		}	
	}	
	system("pause");				
	return 0;
}
