#include <iostream>
	
using namespace std;


int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int n1, n2, n3, n4, n5, n6, n7, n8, soma=0, nPar=0;
	
	cout<<"Digite o número 1: ";
	cin>>n1;
	
	cout<<"Digite o número 2: ";
	cin>>n2;
	
	cout<<"Digite o número 3: ";
	cin>>n3;
	
	cout<<"Digite o número 4: ";
	cin>>n4;
	
	cout<<"Digite o número 5: ";
	cin>>n5;
	
	cout<<"Digite o número 6: ";
	cin>>n6;
	
	cout<<"Digite o número 7: ";
	cin>>n7;
	
	cout<<"Digite o número 8: ";
	cin>>n8;
	
	if(n1%2==0){
		nPar+= 1;
		soma+= n1;
	}
	if(n2%2==0){
		nPar+= 1;
		soma+= n2;
	}
	if(n3%2==0){
		nPar+= 1;
		soma+= n3;
	}
	if(n4%2==0){
		nPar+= 1;
		soma+= n4;
	}
	if(n5%2==0){
		nPar+= 1;
		soma+= n5;
	}
	if(n6%2==0){
		nPar+= 1;
		soma+= n6;
	}
	if(n7%2==0){
		nPar+= 1;
		soma+= n7;
	}
	if(n8%2==0){
		nPar+= 1;
		soma+= n8;
	}
	
	cout<<"A quantidade de números pares é de: " << nPar <<endl;
	cout<<"A soma dos números pares é de: " << soma <<endl;
	
	system("pause");				
	return 0;
}
