#include <stdio.h>

int fatorial(int n){
    if(n == 0) return 1;//caso base
    else return n*fatorial(n-1); //chamada recursiva
}

int maxRec(int num, int v[]){
    if(num == 1){
        return v[0];
    } else{
        int x;
        
        x = maxRec(num-1, v);

        if(x > v[num-1]){
            return x;
        }else {
            return v[num-1];
        }

    }
}

int main(){
    int v[] = {4,7,8,6,20,3,1};
    
    printf("%d", maxRec(7, v));
    
    return 0;
}