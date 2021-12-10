#include <iostream>
using namespace std;

#define MAX 5

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int mat [MAX][MAX];
	
	for (int i=0; i<MAX; i++){
		for(int j=0; j<MAX; j++){
			cout<< "Digite o elemento " << i << "," << j << ": ";
			cin>> mat[i][j]; 
		}
	}
	
	for (int i=0; i<MAX; i++){
		cout<< "|";
		for(int j=0; j<MAX; j++){
			cout<<mat[i][j] << " "; 
		}
		cout << "|\n"; 		
	}
	system("pause");				
	return 0;
}
