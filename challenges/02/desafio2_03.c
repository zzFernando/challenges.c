//Fernando Souza
#include <stdio.h>

int funcaoParOuImpar (int j);

int main(void)
{
  //variaveis
  int vetor[10],i;
  
  //populando vetor com o valor inteiro 30
  for (i = 0; i <= 9; i++)
  {
     vetor[i] = funcaoParOuImpar(i);
  }  
  //printf do vetor
  for (i = 0; i <= 9; i++)
  {
    printf ("vetor[%d] = %d\n", i, vetor[i]);
  }
}

int funcaoParOuImpar (int j) {
    if (j % 2 == 0){
        return 20;
    } else {
        return 10;
    }
}