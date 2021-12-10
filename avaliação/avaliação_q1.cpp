#include <iostream>	
using namespace std;

int main(){	
	setlocale(LC_CTYPE, "Portuguese");
	
	char nome[10];
	
	fflush(stdin);
	cout<<"Insira um nome: "<<endl;
	scanf("%s", nome);
		
	for(int i=9; i>=0; i--){
		printf("%c ", toupper(nome[i]));
	}					
				
	return 0;	
}
