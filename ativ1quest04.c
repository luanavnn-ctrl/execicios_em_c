#include<stdio.h>

int main(){
    /*declaração de variaveis*/
    float num1, num2, num3, num4;
    float media;

    /*entrada de dados*/
    printf("Digite o primeiro numero inteiro: "); 
    scanf("%f", &num1);
    printf("Digite o segundo numero inteiro: "); 
    scanf("%f", &num2);
    printf("Digite o terceiro numero inteiro: "); 
    scanf("%f", &num3);
    printf("Digite o quarto numero inteiro: "); 
    scanf("%f", &num4);

    /*processamento*/
    media = (num1 + num2 + num3 + num4) / 4;

    /*saida de dados*/
    printf("A media aritimetica eh de %.2f", media);
   
    return 0;
}

