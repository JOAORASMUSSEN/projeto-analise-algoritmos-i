#include <stdio.h>
#include "lib.h"

void inverte(int arr[], int tam){
    for(int i = 0; i < tam/2; i++){
        int aux = arr[i];
        arr[i] = arr[tam - 1 -i];
        arr[tam -1 -i] = aux;

    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int tam = sizeof(arr)/sizeof(arr[0]);

    inverte(arr, tam);
    imprime_arranjo(arr, tam);
}