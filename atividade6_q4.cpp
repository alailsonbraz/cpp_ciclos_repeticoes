#include <iostream>
	
using namespace std;

#define LIN 2
#define COL 2

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	string boletin[LIN][COL];
	
	for(int i=0; i<LIN; i++){	
		for(int j=0; j<COL; j++){
			cout<<"Insira o elemento da posição " << i << " "<< j <<" da matriz ";
			cin >> boletin[i][j];
		}	
	}
	cout<< "\tNOME" << "\tMATEMATICA" << "\tGEOGRAFIA" << "\t\tFISICA" << "\tHISTORIA"<<endl;

	for(int i=0; i<LIN; i++){	
		for(int j=0; j<COL; j++){
		
			cout << "\t"<< boletin[i][j] <<"\t";
		}printf("\n");
	}
	system("pause");				
	return 0;
}
