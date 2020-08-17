#include <stdio.h>

int fatorial(int n) {
    int result;

    if (n <= 1)
        return (1);
    else {
        result = n * fatorial(n - 1);
        return (result);
    }
}

int main() {
    for (int i = 0; i < 10; i++) {
        printf("fatorial(%d) = %d\n", i, fatorial(i));
    }

    return 0;
}