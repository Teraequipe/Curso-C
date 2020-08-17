#include <stdio.h>
#include <string.h>

//definindo a struct aluno
struct aluno {
    char nome[50];
    int idade;
};

int main(){
    struct aluno alunosufu[10]; //criando um array de 10 unidades do tipo aluno chamado alunos ufu


    for (int i = 0 ; i < 10; i++){
        printf("Aluno %d:\n", i+1);

        printf("Insira o nome: ");
        fflush(stdin); //limpa o buffer
        fgets(alunosufu[i].nome, 50, stdin); //armazena o nome do aluno

        printf("Insira a idade: ");
        scanf("%d", &alunosufu[i].idade);


    }
    for (int i = 0 ; i < 10; i++){
        printf("Aluno %d:\n", i+1);

        printf("Nome: ");
        puts(alunosufu[i].nome);

        printf("Idade: %d\n\n", alunosufu[i].idade);
    


    }

    return 0;
}