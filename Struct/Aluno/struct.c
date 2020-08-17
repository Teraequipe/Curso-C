#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[50];
    int idade;
};

int main(){
    struct aluno pedro = {"Pedro da Silva", 18};
    printf("Nome: ");

    puts(pedro.nome);
    printf("\n");
    printf("Idade: ");
    printf("%d",pedro.idade);
    printf("\n");


    return 0;
}