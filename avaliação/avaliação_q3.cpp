#include <iostream>
using namespace std;
 

int main(){	
	setlocale(LC_CTYPE, "Portuguese");
	
	int dia_semana;
	
	cout<<"Dias da Semana"<<endl;
	cout<<"Informe um n�mero de 1 a 7: "<<endl;
	cin>>dia_semana;
	
	switch(dia_semana){
		case 1:
			cout<<"1 - Domingo"<<endl;
			break;
		case 2:
			cout<<"2 - Segunda"<<endl;
			break;
		case 3:
			cout<<"3 - Ter�a"<<endl;
			break;
		case 4:
			cout<<"4 - Quarta"<<endl;
			break;
		case 5:
			cout<<"5 - Quinta"<<endl;
			break;
		case 6:
			cout<<"6 - Sexta"<<endl;
			break;
		case 7:
			cout<<"6 - S�bado"<<endl;
			break;
		default:
			cout<<"Op��o inv�lida!"<<endl;
			break;
	}		
	
	system("pause");
	return 0;	
}
