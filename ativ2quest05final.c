#include <stdio.h>

int main(){
    /*declaracao de variaveis*/
    int codigo_estado, codigo_carga, peso, op;
    float preco, imposto, valor_imposto, valor_total;

    /*entrada de dados*/
    printf("Digite o codigo do estado [1-4]: ");
    scanf("%d", &codigo_estado);
    printf("Digite o codigo da carga [10 - 40]: ");
    scanf("%d", &codigo_carga);
    printf("Digite o peso da carga [t]: ");
    scanf("%d", &peso);

    peso = peso * 1000;

    switch (codigo_estado){
    case 1: codigo_estado == 1;
        printf("O valor do imposto eh 20 por cento sob o valor da carga\n");
        (codigo_carga >= 10) && (codigo_carga <= 20); 
        preco = 180 * peso;
        valor_imposto = preco * imposto;
        valor_total = preco + valor_imposto;
        printf("Valor da carga eh %.2f\n", valor_total);
        (codigo_carga >= 21) && (codigo_carga <= 30);
        preco = 120 * peso;
        valor_imposto = preco * imposto;
        valor_total = preco + valor_imposto;
        printf("Valor da carga eh %.2f\n", valor_total);
        (codigo_carga >= 31) && (codigo_carga <= 40);
        preco = 230 * peso;
        valor_imposto = preco * imposto;
        valor_total = preco + valor_imposto;
        printf("Valor da carga eh %.2f\n", valor_total);

    default:
        printf("Codigo de estado invalido");
        break;
    }

    return 0;
}
