#include <stdio.h>

int main(){

    int v[99];
    for(int i = 0; i < 99; ++i){
        v[i] = 98 - i;
        //printf("%d\n", v[i]);
    }

    for(int i = 0; i < 99; ++i){
        v[i] = v[v[i]];
        printf("%d\n", v[i]);
    }

    return 0;
}