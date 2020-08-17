#include <stdio.h>

int fatorial(int n){
     if(n==0){
         n=1; 
        return n;
    }

    for(int i=n-1; i>0; i--){
        n=n*i;
    }

    return n;
}

int main(){
    printf("O fatorial de 6 é %f", fatorial(6))
    return 0;
}