/*
    Captura um valor do usuário 
    e, se o número for 0 (zero) o programa diz que é zero,
    senão, se o número for divisível por 2 o programa diz que é par,
    senão diz que é ímpar
*/

#include <stdio.h>

int main(){
    
    printf("Digite um numero: ");
    int numero;
    scanf("%d",&numero);
    
    if(numero == 0){
        printf("O numero eh zero! e par! ok arthur\n");
    }
    else if( (numero % 2) == 0){
        printf("O numero eh par!");
    }
    else{
        printf("O numero eh impar!");
    }

    return 0;
}