/*Elabore um programa que leia uma frase e o número de vezes que deseja imprimi-la.*/

#include <stdio.h>

int main(){

    int num, i;
    char frase[50];

    printf("Frase: ");
    gets(frase);

    printf("Repeticoes: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        printf("%s\n", frase);
    }
    return 0;
}