#include<stdio.h>

int soma(int a, int b){
	return a + b;
}

int main(){
    int a, b;
    printf("Digite dois numeros para serem somados ");
    scanf("%d%d", &a, &b);
    printf("&d",soma(a, b));
    return 0;
}