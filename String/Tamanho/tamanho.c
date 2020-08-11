#include <stdio.h>

#include <string.h>


int main (){

    char nome[50];
    printf("Escreva seu nome: \n");
    gets(nome);

    int tamanho = strlen(nome);

    printf("Tamanho do seu nome: %d\n", tamanho);
    
    return 0;
}