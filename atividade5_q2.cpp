#include <iostream>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int i=1;
	char alfabeto, caixa;
	
	cout << "Infome *M* para letras em mai�sculo ou *m* para letras em min�sculas:\n";
	cin >> caixa;
	
	if(caixa == 'M'){
		alfabeto=65;
		while (alfabeto <=90){
			cout << alfabeto<< " ";
			alfabeto++;
		}
	}else if(caixa == 'm'){
			alfabeto=97;
			while (alfabeto <=122){
			cout << alfabeto << " ";
			alfabeto++;
			}
		}else {
			cout << "Op��o inv�lida!";
		}	
}
