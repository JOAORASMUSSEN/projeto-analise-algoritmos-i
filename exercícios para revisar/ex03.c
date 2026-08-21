#include <stdio.h>
#include <stdlib.h>

void troca(int *p, int *q);
double* ler_arranjo(unsigned n);

int main(void){
    //int a = 10, b = 20;
    //troca(&a, &b);
    //printf("%d %d\n", a, b);
    
    unsigned n;
    printf("Quantos números vc quer colocar no arranjo? ");
    scanf("%u", &n);
    double* arranjo = ler_arranjo(n);

    for (unsigned i = 0; i < n; i++) {
        printf("arranjo[%u] = %.2f\n", i, arranjo[i]);
    }
    

    free(arranjo);
    return 0;
}

void troca(int *p, int *q){
    int aux = *p;
    *p = *q;
    *q = aux;
}

double* ler_arranjo(unsigned n){
    if (n == 0) return NULL;
    double *p = (double*) malloc(n*sizeof(double));
    if (p == NULL) return NULL;
    for(unsigned i = 0; i < n; i++){
        double num;
        printf("Qual valor você deseja colocar na posição %d do arranjo? ", i+1);
        scanf("%lf", &num);
        *(p+i) = num;
    }

    return p;
}

