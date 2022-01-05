#include <stdio.h>
#include <stdlib.h>

int main(){

    int bebida, prato, prato_op, bebida_op, caloria_prato, caloria_bebida, total;

    printf("Informe o prato desejado: \n 1 - Italiano \n 2 - Japones \n 3 - Salvadoreno \n");
    scanf("%d", prato_op);

    printf("Informe a bebida desejada: \n 1 - Cha \n 2 - Suco de Laranja \n 3 - Refrigerante \n");
    scanf("%d", bebida_op);

    switch (prato_op){
        case 1: prato_op == 1; caloria_prato = 750; 
        case 2: prato_op == 2; caloria_prato = 750; 
        case 3: prato_op == 3; caloria_prato = 750;         
        default: printf("Informe uma opcao valida"); 
    }
    switch (bebida_op){
        case 1: bebida_op == 1; caloria_bebida = 30; 
        case 2: bebida_op == 2; caloria_bebida = 80; 
        case 3: bebida_op == 3; caloria_bebida = 90; 
        default: printf("Informe uma opçao valida"); 
    }

    total = caloria_prato + caloria_bebida;
    printf("O total de calorias da refeicao eh %d", total);

    return 0;    
}