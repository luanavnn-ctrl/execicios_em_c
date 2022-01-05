#include<stdio.h>

int main(){

  int num1, num2, num3, num4, num5, maior, menor;
 
    printf("Insira um numero:");
    scanf("%d %d %d %d %d",&num1, &num2, &num3, &num4, &num5);
 
    if(num1 > num2){
        maior = num1;
        printf("O maior eh o numero %d", num1);
    } 
    else if (maior == num2){
        printf("O maior numero eh %d", num2);
    } 
    if(maior > num3){
        maior == maior;
    } 
    else if (maior == 3){
        printf("O maior numero eh %d", num3);
    } 
    else if (maior == num4){
        printf("O maior numero eh %d", num4);
    } 
    else if (maior == num4){
        printf("O maior numero eh %d", num5);
    }

    return 0;
 
}