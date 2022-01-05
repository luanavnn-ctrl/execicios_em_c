/*Construa um programa que possibilite calcular a área total de uma residência (sala, cozinha, banheiro, quartos etc.). 
O programa deve solicitar a entrada do nome, a largura e o comprimento de um determinado cômodo até que o nome do cômodo seja "FIM". 
O programa deve apresentar o valor total acumulado da área residencial.*/

#include <stdio.h>

int main(){
    
    int count = 0, comodo;
    float t_area = 0, largura, comprimento, area_comodo = 0;   

    while (comodo != 5){
        printf("\nDigite comodo desejado:\n1 - Sala\n2 - Cozinha\n3 - Quarto\n4 - Banheiro\n5 - FIM\n");
        scanf("%d", &comodo);

        if(comodo == 5){
            printf("\nSoma das areas dos comodos selecionados = %.2f m2\n", t_area);
        }
       
        count++;

        if (count != 5){                                                
            printf("\nLargura: "); 
            scanf("%f", &largura); 
            printf("Comprimento: "); 
            scanf("%f", &comprimento); 
            area_comodo = largura * comprimento;                         
        }

        t_area += area_comodo;        
    }

    return 0;
}