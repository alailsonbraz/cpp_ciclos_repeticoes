//Faça um algoritmo que construa uma matriz de nome MAT de 10 linhas e 15 colunas contendo números inteiros. Em seguida escreva a soma dos elementos 
//de cada linha e se a soma dos elementos é par ou impar. Por fim escreva a soma dos elementos de cada coluna e se a soma dos elementos é par ou impar.

#include <iostream>
using namespace std;

#define LIN 10
#define COL 15

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int mat [LIN][COL], somaLinha, somaColuna;
	
	for (int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			cout<< "Digite o elemento " << i << "," << j << ": ";
			cin>> mat[i][j]; 
		}
	}
	
	for (int i=0; i<LIN; i++){
		cout<< "|";
		for(int j=0; j<COL; j++){	
			cout<<mat[i][j] << " ";
		}	
	    cout << "|\n"; 		
	}
	
	for (int i=0; i<LIN; i++){
		somaLinha=0;
		for(int j=0; j<COL; j++){
			somaLinha+=mat[i][j];
		}
		cout<<"Soma da linha " << i + 1 << ": " << somaLinha <<" ";
		if(somaLinha%2==0){
			cout<< " PAR!\n";
		}else{
			cout<< " ÍMPAR!\n";
		}	
	}
	
		for (int i=0; i<COL; i++){
		somaColuna=0;
			for(int j=0; j<LIN; j++){
			somaColuna+=mat[j][i];
		}
		cout<<"Soma da Coluna " << i + 1 << ": " << somaColuna <<" ";
		if(somaColuna%2==0){
			cout<< " PAR!\n";
		}else{
			cout<< " ÍMPAR!\n";
		}		
	}
	
	
	system("pause");				
	return 0;
}
