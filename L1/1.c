#include <stdio.h>

int multiplicar(int n, int x);

int main(void) {
    int n;

    scanf("%d", &n);
    if (n < 1) {
        return 0;
    }
    multiplicar(n, 1);

    return 0;
}

int multiplicar(int n, int x) {
    if (x <= 10) {
        printf("%d x %d = %d\n", x, n, n * x);
        multiplicar(n, x + 1);
    }
    return n;
}
