#include <stdio.h>

//encontra o maior elemento do vetor
int encontrarMaior(int vetor[], int n) {
    int maior = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}

//bubble sort como algoritmo auxiliar
void bubbleSort(int vetor[], int n, int exp) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {

            int digitoAtual = (vetor[j] / exp) % 10;
            int proximoDigito = (vetor[j + 1] / exp) % 10;

            if (digitoAtual > proximoDigito) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void radixSort(int vetor[], int n) {
    int maior = encontrarMaior(vetor, n);

    for (int exp = 1; maior / exp > 0; exp *= 10) {
        bubbleSort(vetor, n, exp);
    }
}

void imprimirVetor(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}

int main() {
    int vetor[] = {17, 4, 7, 9, 14, 12, 2, 6, 1, 19};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor antes de ordenar: ");
    imprimirVetor(vetor, n);

    radixSort(vetor, n);

    printf("Vetor depois de ordenar: ");
    imprimirVetor(vetor, n);

    return 0;
}