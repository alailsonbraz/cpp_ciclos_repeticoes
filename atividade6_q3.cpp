#include <iostream>
#include <string>	
using namespace std;

#define LIN 5
#define COL 10

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	char mat[LIN][COL]={
	{'D', 'i', 's', 'c', 'i', 'p', 'l', 'i', 'n', 'a'},
	{'M', 'a', 't', 'e', 'm', 'á', 't', 'i', 'c', 'a'},
	{'H', 'i', 's', 't', 'ó', 'r', 'i', 'a'},
	{'F', 'í', 's', 'i', 'c', 'a'},
	{'G', 'e', 'o', 'g', 'r', 'a', 'f', 'i', 'a'}
	};
	
	
	
	for (int i=0; i<LIN; i++){
		cout<< "|";
		for(int j=0; j<COL; j++){	
			cout<<mat[i][j];
		}	
	    cout << "|\n"; 		
	}
		system("pause");				
	return 0;
}

