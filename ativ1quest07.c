#include<stdio.h>

main(){
    int num, ant, suc;

    printf("Digite um numero: ");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("O antecessor eh %d", ant);
    printf("\nO sucessor eh %d", suc);

    return 0;
}

