#include <stdio.h>

int main(){

    float  soma = 0; 
    int num, i;

    printf("Digite a quantidade de termos da serie: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++){
        soma =  soma + (float)1 / i;
    }
    printf("\nSerie com %d termos --> S = %.2f", num, soma);

    return 0;
}