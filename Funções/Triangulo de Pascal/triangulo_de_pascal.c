#include <stdio.h>


void pascal(int numlinhas);

int fatorial(int n);

int comb(int x , int y);

void espaco(int numespac);

int main(){
    int linhas;
    printf("Insira o numero de linhas: ");
    scanf("%d", &linhas);

    pascal(linhas);

    return 0; 
}

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

int comb(int x , int y){
    //x!/(y!*(x-y)!)
    return fatorial(x)/(fatorial(y)*fatorial(x-y));

}





void pascal(int numlinhas){
    
    for (int i = 0; i<numlinhas; i++){
        espaco(numlinhas-i);
        for(int j= 0; j<=i; j++){
            
            printf("  %d", comb(i, j));
        }
        printf("\n");

    }
    
    
}


void espaco(int numespac){
    for (int i = 0; i<numespac; i++){
        printf(" ");


    }



}