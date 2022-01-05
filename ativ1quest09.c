#include<stdio.h>

main(){

    float deposito, juros, rendimento, total;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);
    printf("Digite o valor da taxa de juros: ");
    scanf("%f", &juros);

    rendimento = deposito * juros;
    total = deposito + rendimento;

    printf("O valor do rendimento eh de %.2f", rendimento);
    printf("\nO valor total eh de %.2f", total);

    return 0;
}

