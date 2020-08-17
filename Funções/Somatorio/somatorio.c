#include<stdio.h>


float quadrado(float x){


    return x*x;
}

int soma(int a, int b){
    printf("dentro da soma a: %d b: %d\n",a,b);
	return a + b;
}

int main(){
    int a, b;
    printf("Digite dois numeros para serem somados ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d",soma(a, b));
    printf("fora da soma a: %d b: %d\n",a,b);

    
    return 0;
}