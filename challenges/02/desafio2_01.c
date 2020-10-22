//Fernando Souza
#include <stdio.h>

int main(void)
{
  //variaveis
  int vetor[10],i;
  
  //populando vetor com o valor inteiro 30
  for (i = 0; i <= 9; i++)
  {
     vetor[i] = 30;
  }
  
  //printf do vetor
  for (i = 0; i <= 9; i++)
  {
    printf ("vetor[%d] = %d\n", i, vetor[i]);
  }
}