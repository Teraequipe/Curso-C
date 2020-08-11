#include <stdio.h>
#include<string.h>

int main (){
    
    printf("%d\n", ('E'-'e'));
    char nome[]="Vetor Eh A Classe De Equipolencia De Segmentos Orientados";
    int quantidade = 0;
    for (int i = 0 ; i < strlen(nome); i++){
        if ('a'<=nome[i] && nome[i]<='z'){
            nome[i] = nome[i] - 32;

        }

    }
    
    puts(nome);



    
}