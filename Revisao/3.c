#include <stdio.h>

int main() {
    int hi, mi, hf, mf, minutos, horas;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    minutos = mf - mi;

    if (minutos < 0) {
        minutos = 60 + minutos;
    }

    horas = hf - hi;

    if (mf < mi) {
        horas -= 1;
    }

    if (horas < 0) {
        horas = 24 + horas;
    }

    if (horas == 0 && minutos == 0) {
        horas = 24;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
