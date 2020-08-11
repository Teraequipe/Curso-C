#include<stdio.h>
#include<string.h>



int main(){
    // char equipe[5] = "Tera";
    // char nome[6];
    // strcpy(nome, "ERICK");
    // printf("Nome: %s",nome);
    
    char equipe[] = "Equipe Tera";
    char nome[7];
    strncpy(nome, equipe, 6);
    nome[7] = '\0'; //finalizando a string
    printf("Nome: %s",nome);


    return 0;
}
