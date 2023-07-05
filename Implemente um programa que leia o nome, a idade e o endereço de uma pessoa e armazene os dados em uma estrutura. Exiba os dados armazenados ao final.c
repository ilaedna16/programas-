#include <stdio.h>
#include <locale.h>

 typedef struct dados{ 

	char nome[20];  
	int end; 
    int idade; 
}dados; 

int main () { 
    setlocale (LC_ALL, "portuguese"); 

	dados pessoa;

	printf ("Digite seu nome:\n"); 
	scanf ("%[^\n]",pessoa.nome); 
    printf ("Digite seu endereço:\n"); 
	scanf ("%d", &pessoa.end); 
    printf ("Digite sua idade:\n"); 
	scanf ("%d", &pessoa.idade); 

	
    printf ("O nome da pessoa é:%s\n", pessoa.nome);
    printf ("O endereço da pessoa é:%d\n", pessoa.end);
    printf ("A idade da pessoa é:%d\n", pessoa.idade);
    return 0;
}
