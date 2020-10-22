//Fernando Souza
#include <stdio.h>

int main(void)
{
  //variaveis
  int vetor[10],i ,val=10;
  
  //populando vetor com os números inteiros 10, 20, 30, 40, 50, ..., 100
  for (i = 0; i <= 9; i++,val=val+10)
  {
     vetor[i] = val;
  }
  
  //printf do vetor
  for (i = 0; i <= 9; i++)
  {
    printf ("vetor[%d] = %d\n", i, vetor[i]);
  }
}