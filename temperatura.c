//Fa-a-um-programa-que-solicita-e-l-temperatura-em-Fahrenheit-faz-a-convers-o-para-Celsius-e-exibe-t



#include <stdio.h>

int main()
{
    float c, f; 
    
    printf ("digite a temperatura em graus fahreneit\n");
    scanf ("%f",&f); 
    
    c= ((f-32) / 1.8);
    
    printf ("a temperatura em graus celsius eh:%f\n", c); 
    
    
    
    return 0;
}
