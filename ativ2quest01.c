#include<stdio.h>

int main()
{
  int num, maior = 0, menor = 0, i=0;
 
    printf("Digite um numero:");
    scanf("%d",&num);
   
  menor = num;
  maior = num;
 
  for(i = 1; i < 5; i++){
   
    printf("Digite um numero:");
    scanf("%d",&num);

    if(num > maior) maior = num;
    if(num < menor) menor = num;
   
  }

  printf ("%d eh menor numero e  %d eh o maior numero\n",menor, maior);
 
  return 0;
 
}