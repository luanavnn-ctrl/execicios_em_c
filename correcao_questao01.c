#include <stdio.h>

int main(){
    //decaraçao de variaveis
    int lista [5], maior, menor;

    //entrada
    int i;
    for(i = 0; i <= 4; i++){
    printf("Insira um numero: ");
    scanf("%d", &lista[i]);
    }

    maior = lista[0];
    menor = lista[0];

    //processamento
    for(i = 1; i <= 4; i++){
        if(lista[i] > maior){
            maior = lista[i];
        }
        if(lista[i] < menor){
            menor = lista[i];
        }
    }
    //saida
    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);

    return 0;
}