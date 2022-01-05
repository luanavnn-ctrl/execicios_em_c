/*Elabore um programa que receba a idade, peso, sexo e o estado civil de várias pessoas e imprima a quantidade de pessoas 
casadas, solteiras, separadas e viúvas. Apresenta a média de idade e de peso. O algoritmo finaliza quando for informado o valor zero para idade.*/

#include <stdio.h>

int main(){

    int total_idade=0, idade, qtde_casada=0, qtde_solteira=0, qtde_separada=0, qtde_viuva=0, qtde=0;
    int sexo, estado_civil;
    float total_peso=0, peso, media_peso=0, media_idade=0;    

    while (idade != 0){
        printf("\nIdade: ");
        scanf("%d", &idade);
        
        if(idade != 0){
            qtde++;
            total_idade = total_idade + idade;
            printf("Peso: ");
            scanf("%f", &peso);
            total_peso = total_peso + peso;
            printf("Sexo:\n1 - Feminino\n2 - Masculino\n");
            scanf("%d", &sexo);
            printf("Estado civil:\n1 - Solteiro(a)\n2 - Casado(a)\n3 - Separado(a)\n4 - Viuvo(a)\n");
            scanf("%d", &estado_civil);
            switch(estado_civil){
                case 1: qtde_solteira++; break;
                case 2: qtde_casada++; break;
                case 3: qtde_separada++; break;
                case 4: qtde_viuva++; break;
                default: printf("Estado civil invalido"); break;
            }
            media_idade = total_idade / qtde;
            media_peso = total_peso / qtde;

            printf("\nCasadas: %d\nSolteiras: %d\nSeparadas: %d\nViuvas: %d\n", qtde_casada, qtde_solteira, qtde_separada, qtde_viuva);
            printf("\nMedia de idade: %.2f\nMedia de peso: %.2f\n", media_idade, media_peso);             

        }
    }
    
    

    return 0;
}