\\Elabore-uma-fun-o-com-retorno-que-recebe-um-valor-inteiro-maior-ou-igual-a-zero-por-par-metro-e-r

#include <stdio.h>
int fatorial (int x) { 
    int i, f = 1; 
    for (i = 1; i <= x; i++) {
        f = f * i; 
        
        
    }

    return (f);
} 
    int main () { 
        int n; 
        printf ("digite um valor inteiro:"); 
        scanf ("%d", &n); 
        
        if (n >= 0) {
            printf ("fatorial de %i é %i", n, fatorial(n)); 
            
        }
        
        else { 
            
            printf ("não é possivel calcular o fatorial do numero negativo."); 
        } 
            
            return 0; 
            
            
        }
