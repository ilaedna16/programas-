#include<stdio.h>
#include<locale.h>

//Elabore um programa que solicita e armazena 3 notas de 5 alunos em uma matriz 5//
//x 3. Por fim, calcula e exibe a média aritmética obtida por cada aluno.//

int main () { 

	setlocale (LC_ALL, "portuguese"); 
	int i, j; 
	float notas[5][3], m; 
	for (i=0; i<=4; i++) { 
	printf (">>%iº aluno: \n", i+1); 
	  	for (j=0; j<=2; j++) { 
	  		printf ("Digite a %iº nota: \n", j+1); 
	  		scanf("%f",&notas[i][j]);
		  }
		  printf ("\n"); 
	} 
	
	for (i=0; i<=4; i++) { 
	m=0; 
	for (j=0; j<=2; j++) { 
	m = m + notas [i][j]; 
	}
	printf ("\n A média do %iº aluno: %.f",i+1, m/3); 
	}
	
	return 0; 
}





