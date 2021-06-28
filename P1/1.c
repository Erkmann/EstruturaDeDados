#include <stdio.h>

int calcula_fatorial(int n);

int main(void) {
    int n;
    scanf("%d", &n);
    if (n < 13 && n > 0) {
        printf("%d\n", calcula_fatorial(n));
    }
    return 0;
}

int calcula_fatorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * (calcula_fatorial(n-1));
}
