#include <stdio.h>

int main()
{
    
   //Fazer um programa em "C" que solicite 2 números e informe:
 //a) A soma dos números;
 //b) O produto do primeiro número pelo quadrado do segundo;
 //c) O quadrado do primeiro número;
 //d) A raiz quadrada da soma dos quadrados;
 //e) O seno da diferença do primeiro número pelo segundo;
 //f) O módulo do primeiro número.
 
 
 
    int n1, n2;
    int soma, p, q, r, s, m; 
     
     printf ("Digite o primeiro numero:\n"); 
     scanf ("%d",&n1); 
     printf ("Digite o segundo numero:\n"); 
     scanf ("%d",&n2);
     
     soma= n1+n2; 
     p= n1*(n2*n2); 
     q= n1*n1;
     r= (n1, 2) + (n2, 2); 
     s= (n1+n2); 
     m= n1; 
     
         printf("\n soma dos numeros eh: soma");
         printf("\n O produto do primeiro numero pelo quadrado do segundo eh: p");
         printf("\n O quadrado do primeiro número eh: q ")
         printf("\n A raiz quadrada da soma dos quadrados eh: r ");  
         printf("\n O seno da diferença do primeiro numero pelo segundo eh: s ");  
         printf("\n O modulo do primeiro numero eh: m "); 
        
    return 0;
}
