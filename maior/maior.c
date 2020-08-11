/* Programa para verificar relações entre a e b*/

#include <stdio.h>

int main (){
    int a, b;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);


    if (a==b){
        printf("a eh igual a b\n");
    }
    else if (a<b){
        printf("a eh menor que b\n");

    }else{
        printf("a eh maior que b");
        
    }

}