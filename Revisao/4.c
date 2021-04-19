#include <stdio.h>

int main() {
    int x, y;
    char *quadrante;

    do {
        scanf("%d %d", &x, &y);

        if (x == 0 || y == 0) {
            return 0;
        }

        if (x > 0) {
            if (y > 0) {
                quadrante = "primeiro";
            }
            else {
                quadrante = "quarto";
            }
        }
        else {
            if (y > 0) {
                quadrante = "segundo";
            }
            else {
                quadrante = "terceiro";
            }
        }

        printf("%s\n", quadrante);
    } while (x != 0 && y != 0);

    return 0;
}
