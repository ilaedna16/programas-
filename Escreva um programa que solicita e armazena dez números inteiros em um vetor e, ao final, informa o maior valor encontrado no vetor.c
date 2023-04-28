#include<stdio.h> 
#include<locale.h>
int main ()
{ 

	setlocale (LC_ALL, "portuguese"); 
	int i, m, vet[10]; 
	for (i=0; i<=9; i++) { 
	printf ("Digite o %iº valor inteiro: ", i+1); 
	scanf ("%i", &vet[i]); 
		
	
	}
	m= vet[0]; 
	for (i=1; i<=9; i++) { 
	if (vet[i] > m) { 
	m = vet [i]; 
	
} 
	}
	printf ("\n*** VETOR ***\n"); 
		for (i=0; i<=9; i++) { 
		printf ("%i", vet[i]); 
	} 
	printf ("\n>> Maior valor: %i", m); 
		
	
	return 0; 
	
}
