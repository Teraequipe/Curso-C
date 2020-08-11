#include<stdio.h>
int main(){
    char nome1[] = "Tera";
    char nome2[5] = {'T','E','R','A'}; //definindo cada caracter
    char nome3[] = "Tera"; //o tamanho necessário já é calculado
    
    // printf("%s",nome1);
    // printf("%s",nome2);
    // printf("%s",nome3);

    puts(nome1);
    puts(nome2);
    puts(nome3);

    return 0;
}
