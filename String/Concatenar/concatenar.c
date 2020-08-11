#include<stdio.h>
#include<string.h>

int main(){
    // char equipe[12] = "Equipe ";
    // char nome[6] = "Tera";
    
    // strcat(equipe, nome);
    // printf("Nome: %s",equipe);
 

    char equipe[12] = "Equipe ";
    char nome[] = "Teraaaaaaaaaaaaaaaa";
    strncat(equipe, nome,4);
    printf("Nome: %s",equipe);

    return 0;
}
