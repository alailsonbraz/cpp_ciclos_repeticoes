#include <iostream>

using namespace std;
 


int main(){	
	setlocale(LC_CTYPE, "Portuguese");
	
	string produtos[4][2];
	
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++){
			printf("Insira o dado da lina %d coluna %d: ", i, j);
			cin>>produtos[i][j];
		}
	}
	
	for(int i=0; i<4; i++){
		cout<<"||";
		for(int j=0; j<2; j++){
			cout<< "\t"<<produtos[i][j]<< "|\t";
		}printf("\n");
	}		
	
	system("pause");
	return 0;	
}
