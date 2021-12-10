
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main () {
	
	setlocale (LC_ALL, "portuguese");
	
	int i=1;
	float nota, soma_notas, n_notas, media;	
	
	while ( i < 6)
	{
		printf ("Insira a nota %d: ", i);
		scanf ("%f", &nota);
		i++;
		soma_notas = soma_notas+nota;
		n_notas++;
	}
		
	media = soma_notas / (i - 1);
	
	printf ("\nA média das notas informadas é %.2f.", media); 

	
	return 0;
	}
