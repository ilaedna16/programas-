#include <stdio.h>
#include <locale.h>

//Crie um programa que simule uma calculadora simples, ou seja, que efetua as
//quatro operações básicas da matemática (adição, subtração, multiplicação e divisão)
//para dois valores reais fornecidos pelo usuário. O programa deve exibir as opções
//ao usuário e efetuar uma delas, conforme a opção digitada pelo usuário. Para isso,
//utilize a estrutura SWITCH.

int main()
{
        setlocale (LC_ALL, "Portuguese");      
        float n1, n2; 
        char op; 
       
         printf ("Calculadora simples\n"); 
         printf("+ para soma\n"); 
         printf("- para subtração\n"); 
         printf("* para multiplicação\n"); 
         printf("/ para divisão\n"); 
         printf ("Digite o operador desejado:\n"); 
         scanf ("%c", &op); 
         printf ("Informe o primeiro número:\n"); 
         scanf ("%f", &n1);
         printf ("Informe o segundo número:\n"); 
         scanf ("%f", &n2); 
         
            switch (op) {  
         
           case '+':
         printf ("Resultado da adição: %.1f", n1+n2); 
         break; 
           case '-':
         printf ("Resultado da subtração: %.1f", n1-n2);
         break; 
           case '*':
         printf ("Resultado da multiplicação: %.1f", n1*n2);
         break; 
           case '/':
         printf ("Resultado da divisão: %.1f", n1/n2);  
         if (n2!=0) { 
             printf ("Não existe divisão por 0!\n\n"); 
         }else{ 
             printf ("O resultado da divisão é indefinido!\n\n"); 
         } 
         break; 
   return (0);
}}
