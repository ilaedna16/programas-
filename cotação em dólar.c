#include <stdio.h>
#include <locale.h>

//A cotação do dólar influencia na economia brasileira e muitos economistas se
//encarregam de calcular, muitas vezes de forma manual, o valor do real em dólar.
//Você foi contratado por um economista para automatizar a conversão de reais em
//dólares. Crie um programa que solicita e lê a cotação do dólar atual e o valor em real
//a ser convertido e, em seguida, calcula e exibe o resultado da conversão.// 



int main()
{
    setlocale (LC_ALL, "Portuguese"); 
    
    float v, d; 
    
    printf ("Digite o valor em real:\n"); 
    scanf ("%f",&v); 
    d= v/5.19;
    printf ("O valor a ser convertido em real é: %.1f", d); 
  

    return 0;
}
