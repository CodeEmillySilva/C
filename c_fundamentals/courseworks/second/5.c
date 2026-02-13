#include <stdio.h>
#include <locale.h>
#define N 15

void apagar (char frase [N], char cLetra) {
    
    int j=0, i;
    char frase2 [N];
    
    for (i=0; i<N; i++) {
        if (frase[i] != cLetra && frase [i] != '\0') {
            frase2[j] = frase [i];
            j++;
        }
    }
    
    for (i=0; i<j; i++) {
        frase [i] = frase2 [i];
    }
    
    frase [i] = '\0';
    
}

int main () {
    
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    char frase [N], cLetra;
    
    printf ("Digite uma sequência de caracteres, uma sentença:\n");
    fgets (frase, N, stdin);
    
    printf ("Digite apenas um caracter que você deseja excluir de todas as palavras da frase:\n");
    cLetra = getchar ();
    
    apagar (frase, cLetra);
    
    printf ("Frase com as ocorrênias de %c apagadas: %s", cLetra, frase);
    
    return 0;
    
}
