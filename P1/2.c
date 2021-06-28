#include <stdio.h>
void bubble_sort (int vetor[], int n);
int quantos_passaram(int pontuacao[], int n, int k);

int main() {

    int n;
    int k;
    scanf("%d", &n);

    int pontuacao[n];

    scanf("%d", &k);

    int i = 0;
    while (i < n) {
        scanf("%d", &pontuacao[i]);
        i++;
    }

    printf("%d\n", quantos_passaram(pontuacao, n, k));

    return 0;
}

void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int quantos_passaram(int pontuacao[], int n, int k) {
    bubble_sort(pontuacao, n);
    int passados = 0;

    for (int i=n-1; i>=0; i--) {
        if (passados < k) {
            passados += 1;
        }
        else if (passados >= k && pontuacao[i+1] == pontuacao[i]) {
            passados += 1;
        }
        else {
            return passados;
        }
    }

    return passados;
}
