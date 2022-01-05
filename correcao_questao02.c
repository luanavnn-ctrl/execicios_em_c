#include <stdio.h>

int main(){
    //declaracao de variaveis
    int numero;

    //entrada
    printf("Informe um numero: ");
    scanf("%d", &numero);

    //processamento
    if(numero%3==0 && numero%7==0){
        printf("O numero eh divisivel por 3 e por 7");
    }
    else{
        printf("Nao eh divisivel nem por 3 nem por 7");
    }
    return 0;
}