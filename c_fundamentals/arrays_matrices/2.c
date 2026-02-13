#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 10

void preenche_vetor_rand (int quant, int c[quant]) {
    for (int i=0; i<quant; i++) {
        c[i]=rand()%X;
    }
}

void mostra_vetor (int quant, int c[quant]) {
    for (int i=0; i<quant; i++) {
        printf ("%dº: %d\t", i, c[i]);
    }
    printf ("\n");
}

void ordena_vetor (int quant, int c[quant], char t) {
    
    for (int i = 0; i < quant - 1; i++) {
        int num = i;
        for (int j = i + 1; j < quant; j++) {
            if ((t == 'c' && c[j] < c[num]) || (t == 'd' && c[j] > c[num])) {
                num = j;
            }
        }
        
        if (num != i) {
            int aux = c[i];
            c[i] = c[num];
            c[num] = aux;
        }
    }
}

int main () {
    
    srand(time(NULL));
    
    int quant, i;
    char t;
    
    do {
        printf ("Digite a quantidade de elementos que você quer dentro do vetor, deve ser maior que zero:\n");
        scanf ("%d", &quant);
    } while (quant<=0);
    
    int c[quant];
    
    preenche_vetor_rand (quant, c);
    printf ("Vetor original:\n");
    mostra_vetor (quant, c);
    
    getchar();
    
    printf ("Digite você quer seu vetor em ordem 'c'=cresente, ou 'd'=decrescente\n");
    scanf ("%c", &t);
    
    ordena_vetor (quant, c, t);
    printf ("Vetor ordenado:\n");
    mostra_vetor (quant, c);
    
    return 0;
}
