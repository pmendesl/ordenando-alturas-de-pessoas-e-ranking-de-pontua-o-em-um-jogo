#include <stdio.h>
#include <string.h> // Para usar a função memcpy

// Função auxiliar para imprimir um vetor de inteiros
void imprimirVetor(const char* titulo, int vetor[], int tamanho) {
    printf("%s", titulo);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// --- ALGORITMOS DE ORDENAÇÃO (DECRESCENTE) ---

// 1. Bubble Sort (Decrescente)
void bubbleSortDecrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] < vetor[j + 1]) { // Condição invertida para ordem decrescente
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

// 2. Insertion Sort (Decrescente)
void insertionSortDecrescente(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];
        int j = i - 1;
        while (j >= 0 && vetor[j] < chave) { // Condição invertida
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = chave;
    }
}

// 3. Selection Sort (Decrescente)
void selectionSortDecrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int idx_max = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] > vetor[idx_max]) { // Busca pelo maior elemento
                idx_max = j;
            }
        }
        if (idx_max != i) {
            int temp = vetor[idx_max];
            vetor[idx_max] = vetor[i];
            vetor[i] = temp;
        }
    }
}

int main() {
    printf("==================================================\n");
    printf("  EXERCICIO 2 - RANKING DE PONTUACAO EM JOGO (C)\n");
    printf("==================================================\n\n");

    int pontuacoes_originais[12] = {340, 250, 480, 120, 390, 500, 295, 150, 450, 320, 210, 410};
    int pontuacoes[12];
    int n_pontuacoes = 12;
    
    imprimirVetor("Lista de pontuacoes original: ", pontuacoes_originais, n_pontuacoes);
    printf("\n--- Ordenando em ordem DECRESCENTE para criar o ranking ---\n\n");
    
    // Demonstração com os três algoritmos
    
    // Bubble Sort
    memcpy(pontuacoes, pontuacoes_originais, sizeof(pontuacoes_originais));
    bubbleSortDecrescente(pontuacoes, n_pontuacoes);
    imprimirVetor("Ranking (Bubble Sort):    ", pontuacoes, n_pontuacoes);

    // Insertion Sort
    memcpy(pontuacoes, pontuacoes_originais, sizeof(pontuacoes_originais));
    insertionSortDecrescente(pontuacoes, n_pontuacoes);
    imprimirVetor("Ranking (Insertion Sort): ", pontuacoes, n_pontuacoes);

    // Selection Sort
    memcpy(pontuacoes, pontuacoes_originais, sizeof(pontuacoes_originais));
    selectionSortDecrescente(pontuacoes, n_pontuacoes);
    imprimirVetor("Ranking (Selection Sort): ", pontuacoes, n_pontuacoes);

    printf("\n--------------------------------------------------\n");
    printf("Resultado Final:\n");
    printf("--------------------------------------------------\n");
    printf("A maior pontuacao foi %d.\n", pontuacoes[0]); // pontuacoes[0] terá o maior valor após a ordenação
    printf("O jogador com a maior pontuacao ficou na 1a posicao do ranking.\n");

    return 0;
}
