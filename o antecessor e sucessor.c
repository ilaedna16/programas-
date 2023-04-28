#include <stdio.h>
#include <locale.h>
int main()
{
    
    int n, ant, suc; 
     
    
    printf("Digite um número:\n");
    scanf ("%i", &ant); 
    printf ("Digite outro número:\n"); 
    scanf ("%i", &suc);
    ant = ant -1; 
    suc = suc +1; 
    
    printf ("O antecessor é: ant\n "); 
    printf ("O sucessor é: suc\n "); 
    return 0;
}
