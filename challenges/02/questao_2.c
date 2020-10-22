/*
* - Crie um programa que implemente duas funções: a 1ª para imprimir o conteúdo
* de um vetor, e a 2º para trocar o valor de um elemento específico de um vetor.
* - As funções devem receber os endereços do vetor e do elemento a ser
* trocado.
*/

#include<stdio.h>
#define TAMANHO_VETOR 10
int posicao ,vetA[TAMANHO_VETOR]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},i;

void imprimeVetor(int *endVetor, int tamanhoVetor){
    for(int i = 0 ; i<10 ; i++){
        printf("%d \n" , vetA[i]);
    }
};
void alteraElemento(int *endElemento, int novoValor){
    i = posicao;
        vetA[i] = novoValor;
};

int main(){

    //Declara vetor e variáveis auxiliares...
    int vetA[TAMANHO_VETOR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int posicao, novoValor;

    //Chama função para imprimir o vetor...
    imprimeVetor(vetA, TAMANHO_VETOR);

    //Solicita posição do elemento + novo valor para o elemento desejado...
    puts("Digite a posicao do elemento a ser trocado + o novo valor inteiro:");
    scanf("%d%d", &posicao, &novoValor);

    //Testa se posição é válida e chama função para trocar valores...
    if(posicao > 0 && posicao <= TAMANHO_VETOR){
        //Chama função para trocar valor do elemento...
        alteraElemento(&vetA[posicao - 1], novoValor);
    }else{
        printf("%s\n", "Impossivel alterar conteudo! Posicao excede os limites"
            " do vetor...");
    }

    //Chama função para imprimir o vetor...
    imprimeVetor(vetA, TAMANHO_VETOR);

}