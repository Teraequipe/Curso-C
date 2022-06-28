/*
    Usa switchcase para julgar quem não segue a Tera
*/
#include <stdio.h>

int main(){
    printf("Voce ja curtiu a pagina da tera no instagram?\n");
    printf("1.sim \t2.nao\n");

    int escolha;
    scanf("%d",&escolha);
    
    switch(escolha){
        case 1:
            printf("fico muito feliz, de verdade!!!!!!");
            break;

        case 2:
            printf("ok...");
            break;

        default:
            printf("escolha invalida, nao identifiquei");
            break;
    }

}