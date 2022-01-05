/*A prefeitura está coletando informações sobre o salário e o número de filhos dos habitantes. 
A leitura de dados é realizada até que seja informado o valor -1 para o salário. 
Apresenta a média de salário da população, a média de filhos e o maior salário.*/

#include <stdio.h>

int main(){

    int filho, soma_filhos = 0, cont = 0;
    float salario, soma_salarios = 0, media_filhos = 0, media_salarios = 0, maior = 0;

    while(salario != -1){
        printf("Salario: ");
        scanf("%f", &salario);

        if(salario != -1){
            cont++;
            soma_salarios = soma_salarios + salario;

            printf("Filho(s): ");
            scanf("%d", &filho);
            soma_filhos = soma_filhos + filho;            
        }
        if(salario > maior){
            maior = salario;
        }

        media_filhos = soma_filhos / cont;
        media_salarios = soma_salarios / cont;                
    }

    printf("Medida de filhos: %.2f\n", media_filhos);
    printf("Media dos salarios: %.2f\n", media_salarios); 
    printf("Maior salario cadastrado: %.2f\n", maior);  

    return 0;
}
