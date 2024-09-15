# Challenges in C

Este repositório contém uma série de desafios de programação desenvolvidos em **C**. Os exercícios são projetados para ajudar a praticar lógica de programação, manipulação de vetores e estruturas de controle, como loops e condicionais, usando a linguagem C.

## Descrição dos Desafios

### Desafio 1: Conversor de Temperaturas

Este desafio implementa um programa para converter temperaturas entre **Fahrenheit** e **Celsius**. O usuário pode selecionar a conversão desejada por meio de um menu:

- (1) Converter de Fahrenheit para Celsius.
- (2) Converter de Celsius para Fahrenheit.
- (3) Encerrar a aplicação.

### Desafio 2: Comparação de Crescimento

Neste desafio, é proposto um problema onde duas pessoas têm alturas iniciais diferentes, mas crescem a taxas diferentes. O programa calcula em quantos anos uma pessoa será mais alta que a outra e exibe a evolução das alturas ao longo dos anos.

### Desafio 3: Populando um Vetor com Múltiplos de 10

Este desafio envolve a criação de um vetor de 10 posições e o preenchimento do vetor com os múltiplos de 10 (10, 20, 30, ..., 100). Em seguida, o conteúdo do vetor é exibido.

### Desafio 4: Função para Definir Valores Par ou Ímpar

Aqui, o programa utiliza uma função para determinar se a posição do vetor é par ou ímpar. Se for par, a função retorna 20, e se for ímpar, retorna 10. O vetor é preenchido com esses valores, e o resultado é impresso.

### Desafio 5: Troca de Elemento em um Vetor

Este programa implementa duas funções:
1. **imprimeVetor**: Imprime os valores de um vetor.
2. **alteraElemento**: Troca o valor de um elemento específico do vetor.

O usuário insere a posição e o novo valor, e a função altera o valor correspondente no vetor.

### Desafio 6: Incremento e Módulo

Neste desafio, o programa utiliza um loop `while` para incrementar o valor de `x` até que seja menor que 20, e utiliza o cálculo `x % 5` para determinar se o valor é divisível por 5. Se for, imprime o valor, caso contrário, exibe uma mensagem.

## Estrutura do Repositório

- **`challenges/`**: Diretório contendo os arquivos-fonte dos desafios.
- **`.gitignore`**: Arquivo para ignorar arquivos e diretórios indesejados durante os commits.
- **`LICENSE`**: Arquivo de licença do projeto.
- **`README.md`**: Este arquivo de documentação.

## Como Compilar e Executar

Para compilar qualquer um dos desafios, basta usar o comando `gcc`:

```bash
gcc -o challenge desafio.c
```

Substitua `desafio.c` pelo nome do arquivo C que deseja compilar. Em seguida, execute o programa gerado:

```bash
./challenge
```

## Licença

Este projeto está licenciado sob a Licença GPL-3.0. Consulte o arquivo [LICENSE](LICENSE) para mais detalhes.
