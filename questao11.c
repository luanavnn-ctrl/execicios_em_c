#include <stdio.h>

int main(){

    int num, i, cont = 0;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    for(i = 2; i <= num; i++){ /*numero primos sao maiores que 1, por isso o contador inicia por 2*/   

        if(num % i == 0){ /*numero dividido por outro e o resto eh zero*/
            cont++;              
        }                
    if(cont == 0){ /*numero dividio por ele mesmo o resto eh zero*/        
        printf("%d eh um numero primo\n", num);
    }
    else{
        printf("%d nao eh um numero primo\n", num);
    }
    break;   
    }    
    return 0;
}