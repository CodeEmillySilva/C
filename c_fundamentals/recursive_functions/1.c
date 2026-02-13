#include <stdio.h>

int somatorio (int m, int q, int e) {
    if (m <= 0) {
        return 0;
    }

    if (e % q != 0) {
        e += q - (e % q);
    }

    return e + somatorio (m - 1, q, e + q);
}

int main() {
    
    int n, k, x, soma;
    printf ("Digite quantos termos quererás:\n");
    scanf ("%d", &n);
    printf ("Digite qual será o múltiplo de base:\n");
    scanf ("%d", &k);
    printf ("Digite qual número será o ponto de partida:\n");
    scanf ("%d", &x);

    soma = somatorio (n, k, x);
    
    printf ("A soma dos termos é %d", soma);
    
    return 0;
}
