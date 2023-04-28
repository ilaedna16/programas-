#include <stdio.h>
#include<locale.h> 

    int fatorial (int n);  

int main()
{
        setlocale (LC_ALL, "portuguese");
        int n, r; 
        do { 
            printf ("Digite um valor inteiro:\n"); 
            scanf ("%i", &n); 
        } while (n<0); 
        r=fatorial(n); 
        printf ("%i! = %i", n, r); 
    return 0;
}
int fatorial (int n) { 
    int i, f=1; 
    for (i=n; i>=1; i--) { 
        f= f*i; 
    } 
    return (f); 
} 
