#include <stdio.h>

int verifica(int pw);

int main() {
    int pw;
    scanf("%d", &pw);

    verifica(pw);

    return 0;
}

int verifica(int pw) {
    if (pw == 2002) {
        printf("Acesso Permitido\n");
        return 1;
    }
    printf("Senha Invalida\n");
    int pwNova;
    scanf("%d", &pwNova);

    verifica(pwNova);
    return 0;
}
