#include <stdio.h>
#include <math.h>

int main(void) {
    double n = 3.14159, r, a;

    scanf("%lf", &r);

    a = pow(r, 2) * n;

    printf("A=%.4lf\n", a);

    return 0;
}
