#include<stdio.h>

int soma(int a, int b);

int main(){
    //Primeira forma de usar o valor de retorno
    int a, b;
    printf("Digite dois numeros para serem somados ");
    scanf("%d%d", &a,&b);
    int c = soma(a, b);
    printf("&d",c);

    //Segunda forma de usar o valor de retorno
    printf("&d", soma(a,b));
    return 0;
}

int soma(int a, int b){
	return a + b;
}