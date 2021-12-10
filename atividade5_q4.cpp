#include <iostream>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int i=1, num;
	char reiniciar='s';
	
	while (tolower(reiniciar) == 's' ){
		cout<<"Insira o númera para Tabuada: \n";
		cin>>num;
		
		if(num > 0 && num <= 10){
			while(i<=10){
			cout<< num<<" x " << i << " = " << num * i << "\n";
			i++;	
			}
		} else{
				cout << "Só pode escolher de 1 a 10\n";	
			}
		cout << "Deseja informar outro número (s/n); ";
		cin >> reiniciar;
		i = 1;
	}
}
