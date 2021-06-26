#include <stdio.h>

int bubble_sort (int vetor[], int n);

int main() {
    int n, i, j;

    int partida[24];
    int chegada[24];

    while(scanf("%d", &n) != EOF) {
        int indices[n];
        for (i=0; i<n; i++) {
            scanf("%d", &partida[i]);
        }
        for (i=0; i<n; i++) {
            scanf("%d", &chegada[i]);
        }

        for (i = 0; i < n; ++i) {
			for (j = 0; j < n; ++j) {
				if (chegada[j] == partida[i]) {
	                indices[j] = i;
	            }
			}
        }

        printf("%d\n", bubble_sort (indices, n));
    }

    return 0;
}

int bubble_sort (int vetor[], int n) {
    int k, j, aux, ultrapassagens=0;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
                ultrapassagens += 1;
            }
        }
    }

    return ultrapassagens;
}
