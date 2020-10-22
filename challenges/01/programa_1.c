//Fernando Souza
#include <stdio.h>

int main() {
    //variaveis
    int option=0;
    float far , cel;



    //menu de escolha
    printf("Digite a opção desejada\n(1) Converte de Fahrenheit para Celsius\n(2) Converte de Celsius para Fahrenheit\n(3) Encerra a aplicação\n");
    scanf("%d", &option);

    //opção2
    if(option==2){
        printf("Digite o valor a ser convertido de Celsius para Fahrenheit:\n");
        scanf("%f", &cel);
        far= (cel * 1.8) ;
        printf("O valor em Fahrenheit é: %.1f\n ", far+32);}

    //opção1
    if(option==1){
        printf("Digite o valor a ser convertido de Fahrenheit para celsius:\n");
        scanf("%f", &far);
        cel= (5*(far-32))/9;
        printf("O valor em Fahrenheit é: %.1f\n ", cel);}


//opção3
    if(option==3){
            printf("programa encerrado pelo usuário\n");
    }
}