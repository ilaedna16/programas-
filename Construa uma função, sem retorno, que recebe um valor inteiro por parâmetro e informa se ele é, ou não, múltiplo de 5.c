#include <stdio.h>
#include<locale.h>
void multiplo (int m); 

int main()
{
    setlocale (LC_ALL, "portuguese");
    int v; 
    printf ("Digite um valor inteiro:"); 
    scanf ("%i", &v); 
    multiplo(v); 
    return 0;
}

void multiplo(int m) { 
    if (m % 5 == 0) { 
        printf ("%i é multiplo de 5!", m); 
    } 
    else { 
        printf ("%i não é multiplo de 5!", m);
    }
}
