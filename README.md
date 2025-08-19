# Exercícios de Algoritmos de Ordenação em C

Este repositório contém a implementação em C de três algoritmos de ordenação básicos (Bubble Sort, Insertion Sort e Selection Sort) para resolver dois problemas propostos.

Integrantes:
Pedro Mendes RM: 562242
Leonardo Augusto RM: 565564
Alexandre RM: 563346
Guilherme Peres RM: 563981

## Descrição dos Exercícios

### Exercício 1: Ordenando Alturas de Pessoas (`ordenando-alturas-de-pessoas.c`)

O programa `ordenando-alturas-de-pessoas.c` recebe um vetor com 10 alturas em centímetros e o ordena em **ordem crescente**. O objetivo principal é comparar a eficiência dos três algoritmos medindo o número de trocas (para Bubble e Selection Sort) ou passos de deslocamento (para Insertion Sort).

**Funcionalidades:**
-   Mostra o vetor de alturas original.
-   Aplica os algoritmos Bubble, Insertion e Selection Sort.
-   Exibe o vetor ordenado por cada algoritmo.
-   Apresenta uma tabela comparativa com o número de operações de cada um.

### Exercício 2: Ranking de Pontuação em um Jogo (`ranking-de-pontuacao-em-um-jogo.c`)

O programa `ranking-de-pontuacao-em-um-jogo.c` trabalha com uma lista de 12 pontuações de um jogo. Ele ordena essa lista em **ordem decrescente** para criar um ranking.

**Funcionalidades:**
-   Mostra a lista de pontuações original.
-   Ordena a lista em ordem decrescente usando os três algoritmos.
-   Exibe o ranking final (a lista ordenada).
-   Informa em qual posição ficou o jogador com a maior pontuação.

## Pré-requisitos

Para compilar e executar os programas, você precisará de:
-   Um sistema operacional (Linux, macOS ou Windows).
-   Um compilador C, como o **GCC** (GNU Compiler Collection).

### Verificando se o GCC está instalado

Abra seu terminal (ou Prompt de Comando/PowerShell no Windows) e digite:
```sh
gcc --version
