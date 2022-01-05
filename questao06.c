/*Faça um programa que leia um conjunto de pedidos e calcule o total da compra. O pedido possui os seguintes campos: número, data (dia, mês e ano), preço unitário e quantidade. 
A entrada de pedidos é encerrada quando o usuário informa zero como número do pedido.*/

#include <stdio.h>

int main(){

    float preco_total, preco_unitario;
    int pedido = 1, dia, mes, ano, qtde;

    while (pedido != 0){
        printf("Numero do Pedido: ");
        scanf("%d", &pedido);

        if(pedido != 0){
            printf("Dia: ");
            scanf("%d", &dia);
            printf("Mes: ");
            scanf("%d", &mes);
            printf("Ano: ");
            scanf("%d", &ano);
            printf("Preco unitario: ");
            scanf("%f", &preco_unitario);
            printf("Quantidade: ");
            scanf("%d", &qtde);

            preco_total = preco_total + (preco_unitario * qtde);
        }
    }
    printf("\nValor do pedido: %.2f", preco_total);   

    return 0;
}