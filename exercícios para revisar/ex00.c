#include <stdio.h>
#include "lib.h"

int main (){
    int arr[] = {10, 23, 55, 3, 4, 99};
    int tam = sizeof(arr)/sizeof(arr[0]);

    printf("O elemento 3 está na posição %d\n", busca_linear(arr, tam,3));
    
    tam  = insere(arr, tam, 4, 8);
    imprime_arranjo(arr, tam);

    tam = remover(arr, tam,  4);
    imprime_arranjo(arr, tam);
}