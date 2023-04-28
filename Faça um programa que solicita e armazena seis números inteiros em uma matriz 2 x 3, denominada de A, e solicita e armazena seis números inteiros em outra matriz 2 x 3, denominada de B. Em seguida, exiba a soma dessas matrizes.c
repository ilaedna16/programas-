#include<stdio.h> 
#include<locale.h>
int main ()
{ 

	setlocale (LC_ALL, "portuguese"); 
	int i, j, A[2][3], B[2][3], x = 1; 
	for (i=0; i<=1; i++){ 
		for (j=0; j<=2; j++){ 
		printf ("Digite o %iº valor da matriz A: ", x++); 
		scanf ("%i", &B[i][j]); 
	}
	    }
 
     printf ("\nMATRIZ A:\n "); 
 	for (i=0; i<=1; i++){ 
		for (j=0; j<=2; j++){
		printf ("%i", A[i][j]); 
	} 
	printf ("\n");
} 
	 printf ("\nMATRIZ B:\n "); 
	 for (i=0; i<=1; i++){ 
		for (j=0; j<=2; j++){
		printf ("%i", B[i][j]); 
	} 
	printf ("\n"); 
	 }
	printf ("\nSoma das matrizes A e B: \n");
	 for (i=0; i<=1; i++){ 
		for (j=0; j<=2; j++){ 
		printf ("%i", A[i][j] + B[i][j]); 
	} 
	printf ("\n"); 
}

	return 0; 
	
}
