/*Faça um programa que leia um número inteiro e calcule o seu fatorial.*/

#include <stdio.h>

int main(){

    int num, fator = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num){        
        fator *= num--;                     
    }

    printf("Resultado: %d", fator);

    return 0;
}