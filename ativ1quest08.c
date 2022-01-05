#include<stdio.h>

int main(){
    /*declaração de variaveis*/
    float nota1, nota2, nota3, nota4, media;
    
    /*entrada de dados*/
    printf("Digite a primeira nota: "); 
    scanf("%f", &nota1);
    printf("Digite a segunda nota: "); 
    scanf("%f", &nota2);
    printf("Digite a terceira nota: "); 
    scanf("%f", &nota3);
    printf("Digite a quarta nota: "); 
    scanf("%f", &nota4);

    /*processamento*/
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    /*saida de dados*/
    printf("A media aritimetica eh de %.2f", media);

    return 0;
}

