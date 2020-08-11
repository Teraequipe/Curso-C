/*

Programa para descobrir o perímetro da roda

*/


#include <stdio.h>
#include <math.h>

#define pi 3.1415

int main(){
    printf("Insira um raio em mm: ");
    float raio, circ;
    scanf("%f", &raio);

    circ = 2*pi*raio;

    printf("Raio: %.2f\n", raio);
    printf("Circunferencia: %.2f mm", circ);
    return 0;
}



