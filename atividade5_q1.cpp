#include <iostream>
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int i=1;
	float soma = 0, media, nota;
	
	while (i<=5){
		cout << "Insera a nota " << i <<": ";
		cin >> nota;
		
		soma = soma + nota;
		i++;
	}
	media = soma/5;
	cout << "A média é de: " << media;
}
