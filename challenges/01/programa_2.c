//Fernando Souza
#include <stdio.h>

int main() {
    //variaveis
    int ano= 0;
    float C = 1.10, F = 1.50;
//problema proposto
    printf("Fulano tem 1,50 metro de altura e cresce 2 centímetros por ano,\n"
           "enquanto Ciclano tem 1,10 de altura e cresce 3 centímetros por ano. Construa um programa\n"
           "com apenas uma estrutura de repetição que calcule e imprima quantos anos serão\n"
           "necessários para que Ciclano seja maior que Fulano. Imprima também a evolução das alturas\n"
           "de ambos com o passar dos anos.\n");
    //estrutura  de repetição
    do {
            C = C + 0.03;
            F = F + 0.02;
            ano = ano + 1;
        printf("Fulano:%.2f\nCiclano:%.2f\nTempo:%d anos\n", F, C, ano);
        } while (C<F);
    }
