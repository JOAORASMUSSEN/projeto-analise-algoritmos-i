#include <stdio.h>

int produto(int a, int b){
    if(a == 0 || b ==0 ) return 0;

    return a + produto(a, b-1);

}

int soma_impares(int n){
    if(n == 0) return 0;

    return  (2*n - 1) + soma_impares(n-1);
}

int busca(int arr[], unsigned tam, int valor){
    if(tam == 0) return -1;
    if(arr[tam - 1] == valor) return tam - 1;

    return busca(arr, tam-1, valor);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int tam = sizeof(arr)/sizeof(arr[0]);
    int result = busca(arr, tam, 5);
    printf("%d", result);

    return 0;
}