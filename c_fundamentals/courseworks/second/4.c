#include <stdio.h>
#include <locale.h>
#define N 15

void trim (char linha [N]) {
    
    int inicio=0, fim, tam=0;
    
    while (linha[tam] != '\0') {
        tam++;
    }
    
    while (linha[inicio] == ' ') {
        inicio++;
    }
    
    fim=tam-1;
    
    while (linha[fim] == ' ') {
        fim--;
    }
    
    for (int i=0; i<fim; i++) {
        linha[i]=linha[i+inicio];
    }
    
    linha [fim] = '\0';
    
}

int main () {
    
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    char frase [N];
    
    printf ("Digite uma sentença:\nObs:Considere que essa string contém armazenagem de apenas %d.\n", N-1);
    fgets (frase, N, stdin);
    
    for (int i = 0; i<N-1; i++) {
        if (frase[i]=='\n')
            frase[i] = '\0';
    }
    
    trim (frase);
    
    printf ("A string com espaços removidos do começo e do final:%s", frase);
    
    return 0;
    
}
