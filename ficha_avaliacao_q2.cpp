#include <iostream>	
using namespace std;

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	float C, F;
	char escolha;
	
	cout<<"Para converter a temperatura em Fahrenheit para celsius digite C:"<<endl;
	cout<<"Para converter a temperatura em Celsius para Fahrenheit digite F:"<<endl;
	cin>>escolha;
	
	switch(toupper(escolha)){
		case 'C':
			cout<<"Informe a temperatura em Fahrenheit: ";
			cin>>F;
			C=(F-32)/1.8;
			printf("A temperatura convertida em Celsius é de º%.2f\n", C);
			break;
		case 'F':
			cout<<"Informe a temperatura em Celsius: ";
			cin>>C;
			F=C*1.8+32;
			printf("A temperatura convertida em Fahrenheit é de º%.2f\n", F);
			break;
		default:
			cout<<"Opção inválida!";
	}
	
	system("pause");				
	return 0;
}
