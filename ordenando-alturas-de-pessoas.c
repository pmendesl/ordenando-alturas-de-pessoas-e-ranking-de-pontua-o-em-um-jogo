#include <stdio.h>
#include <string.h> // Para usar a função memcpy para resetar o vetor

// Função auxiliar para imprimir um vetor de inteiros
void imprimirVetor(const char* titulo, int vetor[], int tamanho) {
    printf("%s", titulo);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// --- ALGORITMOS DE ORDENAÇÃO (CRESCENTE) ---

// 1. Bubble Sort (retorna o número de trocas)
int bubbleSort(int vetor[], int tamanho) {
    int trocas = 0;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                trocas++;
            }
        }
    }
    return trocas;
}

// 2. Insertion Sort (retorna o número de deslocamentos)
int insertionSort(int vetor[], int tamanho) {
    int passos = 0;
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];
        int j = i - 1;
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
            passos++;
        }
        vetor[j + 1] = chave;
    }
    return passos;
}

// 3. Selection Sort (retorna o número de trocas)
int selectionSort(int vetor[], int tamanho) {
    int trocas = 0;
    for (int i = 0; i < tamanho - 1; i++) {
        int idx_min = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[idx_min]) {
                idx_min = j;
            }
        }
        if (idx_min != i) {
            int temp = vetor[idx_min];
            vetor[idx_min] = vetor[i];
            vetor[i] = temp;
            trocas++;
        }
    }
    return trocas;
}

int main() {
    printf("==================================================\n");
    printf("  EXERCICIO 1 - ORDENANDO ALTURAS DE PESSOAS (C)\n");
    printf("==================================================\n\n");

    int alturas_originais[10] = {172, 191, 158, 165, 185, 177, 168, 175, 162, 181};
    int alturas[10];
    int n_alturas = 10;

    imprimirVetor("Vetor de alturas original: ", alturas_originais, n_alturas);
    printf("\n--- Ordenando em ordem CRESCENTE ---\n\n");

    // Bubble Sort
    memcpy(alturas, alturas_originais, sizeof(alturas_originais));
    int trocas_bubble = bubbleSort(alturas, n_alturas);
    printf("1. Bubble Sort:\n");
    imprimirVetor("   Vetor ordenado: ", alturas, n_alturas);
    printf("   Numero de trocas: %d\n\n", trocas_bubble);

    // Insertion Sort
    memcpy(alturas, alturas_originais, sizeof(alturas_originais));
    int passos_insertion = insertionSort(alturas, n_alturas);
    printf("2. Insertion Sort:\n");
    imprimirVetor("   Vetor ordenado: ", alturas, n_alturas);
    printf("   Numero de passos (deslocamentos): %d\n\n", passos_insertion);

    // Selection Sort
    memcpy(alturas, alturas_originais, sizeof(alturas_originais));
    int trocas_selection = selectionSort(alturas, n_alturas);
    printf("3. Selection Sort:\n");
    imprimirVetor("   Vetor ordenado: ", alturas, n_alturas);
    printf("   Numero de trocas: %d\n\n", trocas_selection);
    
    printf("--------------------------------------------------\n");
    printf("Comparacao de eficiencia (trocas/passos):\n");
    printf("--------------------------------------------------\n");
    printf("- Bubble Sort:    %d\n", trocas_bubble);
    printf("- Insertion Sort: %d\n", passos_insertion);
    printf("- Selection Sort: %d\n", trocas_selection);
    printf("\nNeste caso, o Selection Sort foi o mais eficiente em numero de trocas.\n");

    return 0;
}
