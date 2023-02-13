#include <stdio.h>

int main()
{
    int n; 
    printf ("digite um valor inteiro"); 
    scanf ("%d", &n); 
    if (n>0) { 
        printf ("%d eh positivo!",n); 
    }
    else if (n<0){ 
        printf ("%d eh negativo",n); 
    }else{ 
        printf ("igual a zero"); 
    } 
    
        
    return 0;
}
