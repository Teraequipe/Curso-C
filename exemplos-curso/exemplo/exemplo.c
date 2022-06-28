#include <math.h>
#include <stdio.h>

#define pi 3.1415926535

long long fatorial(long long n) {
    if (n == 0) {
        return 1;
    } else {
        long long res = 1;
        for (int i = n; i > 0; i--) {
            res *= i;
        }
        return res;
    }
}

float seno(float a) {
    a = a * pi / 180;
    long double s = 0;
    float numerador = a;
    long long denominador = 0;

    for (int i = 0; i < 8; i++) {
        denominador = fatorial(2 * i + 1);
        // printf("denominador: %d\n", denominador);
        if (i % 2 == 0) {
            s += numerador / (denominador * 1.0);
        } else {
            s -= numerador / (denominador * 1.0);
        }
        numerador *= a * a;
    }
    // printf("%f",a);
    return (float)s;
}

int main() {
    for (float i = 0; i < 180; i++) {
        float valor = seno(i);
        printf("seno: %f", valor);
        valor = sin(i * pi / 180);
        printf(" sin: %f\n", valor);
    }
    // float a;
    // printf("insira o angulo que deseja calcular o seno ");
    // scanf("%f", &a);
    // printf("o seno de %f é: %Le", a, seno(a));
    return 0;
}