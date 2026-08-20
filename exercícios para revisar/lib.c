#include "lib.h"
#include <stdio.h>

void imprime_arranjo(int arr[], int tam){
    if(tam == 0) return;
    for(int i = 0; i < tam -1; i++){
        printf("%d, ", arr[i]);
    }

    if(tam > 0){
        printf("%d", arr[tam-1]);
    }
    printf("\n");
}

int busca_linear(int arr[], int tam, int num){
    for(int i = 0; i < tam; i++){
        if(arr[i] == num){
            return i+1;
        }
    }
    return -1;
}

int insere(int arr[], int tam, int pos, int valor){
    if(pos < 0 || pos > tam){
        return tam;
    }

    for(int i = tam; i > pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos] = valor;
    return tam +1;
}

int remover(int arr[], int tam, int pos){
    if(pos < 0 || pos >= tam) return tam;
    
    for(int i = pos; i < tam-1; i++){
        arr[i] = arr[i+1];
    }

    return tam -1;
}

