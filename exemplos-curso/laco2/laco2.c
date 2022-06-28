#include <stdio.h>

int main() {
    for (int i = 0; i <10 ; i++){
        printf("Multiplos de %d: ", i);
        for(int j = 0; j<10;j++){
            int valor = i*j;
            printf(" %d x %d = %d \t", i, j, valor);
        }
        printf("\n");

    }

    return 0;
}