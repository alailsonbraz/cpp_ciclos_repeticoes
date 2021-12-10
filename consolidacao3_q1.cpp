#include <iostream>	
using namespace std;

#define LIN 2
#define COL 20

int main(){
	
	setlocale(LC_CTYPE, "Portuguese");
	
	int pesq[LIN][COL], somaIdade=0, pRegular=0, pBom=0, pExcelente=0;
	float porcBom, mediaIdade;	
	
	for(int i=0; i<COL; i++){
			cout<<"Informe a idade do participante "<<i+1<<": ";
			cin>>pesq[0][i];
			
			cout<<"Informe a opnião do participante "<<i+1<<" (1-> Regular / 2 -> Bom / 3 -> Excelente): ";
			cin>>pesq[1][i];			
	}
	
	for(int i=0; i<COL; i++){
		switch(pesq[1][i]){
			case 3:
				somaIdade+=pesq[0][i];
				pExcelente++;
				break;
			case 1:
				pRegular++;
				break;
			case 2:
				pBom++;
				break;
			default:
				break;
		}
	}
	
	mediaIdade=somaIdade/pExcelente;
	printf("A média das idades das pessoas: %.2f anos\n", mediaIdade);
	
	cout<<"A quantiadde de pssoas que responderam Regular: "<<pRegular<<endl;
	
	porcBom= (100 * pBom)/COL;
	printf("A porcentagem de pessoas que responderam bom foi de %.2f% \n", porcBom);
	
	
	system("pause");				
	return 0;
}
