#include <stdio.h>


int main(){
    int idades[5] = {20 , 15, 20, 17, 98};
    int soma = 0;
    for(int i = 0; i < 5; i++){
        soma += idades[i]; //soma = soma + idades[i];
        printf("%d\n", idades[i]);
    }

   // int soma = idades[1]+idades[1]+idades[2]+idades[3]+idades[4];
   // printf("%d %d %d %d %d", idades[0], idades[1], idades[2], idades[3], idades[4]);
    printf("Soma: %d\n", soma);
    
    return 0;
}