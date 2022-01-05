#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    /*Declarar as variaveis*/
    int num_positivo, quadrado;
    float raiz;
   
    /*Entrada de dados*/
    printf("Informe um valor: ");
    scanf("%d", &num_positivo); 
        
    /*Processamento*/
    quadrado = pow(num_positivo, 2);
    raiz = sqrt(num_positivo);

    /*Saida de dados*/
    printf("\nO quadrado de %d eh %d", num_positivo, quadrado);
    printf("\nA raiz quadradada de %d eh %.2f", num_positivo, raiz);

    return 0;
}