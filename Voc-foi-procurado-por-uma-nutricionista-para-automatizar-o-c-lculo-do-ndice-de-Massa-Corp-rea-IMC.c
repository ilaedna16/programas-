#include <stdio.h>

int main()
{
  
  float peso; 
  float altura; 
  float imc; 
  float massa; 
  
  
  
  
  
  printf ("digite seu peso\n"); 
  scanf ("%f", &peso); 
  printf ("digite sua altura\n"); 
  scanf ("%f", &altura); 
  printf("digite sua massa corporea\n"); 
  scanf ("%f", & massa); 
  
  
  imc= massa / (altura * altura); 
  
  
  
  printf ("o imc eh:  %f\n", imc); 
  
  
  
    return 0;
}
