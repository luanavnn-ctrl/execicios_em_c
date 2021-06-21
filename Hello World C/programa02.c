#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){

    /*Declarar as variaveis*/
    int num_positivo, quadrado;
    float raiz;
   
    /*Entrada de dados*/
    printf("Digite um numero inteiro positivo: "); 
    scanf("%d", &num_positivo); 
    
    /*Processamento*/
    quadrado = num_positivo * num_positivo;
    raiz = sqrt(num_positivo);

    /*Saida de dados*/
    printf("\nO quadrado de %d eh %d", num_positivo, quadrado);
    printf("\nA raiz quadradada de %d eh %f", num_positivo, raiz);

    return 0;
}