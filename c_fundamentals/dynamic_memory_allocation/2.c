#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repetidor (char *s, int n) {
    
    int tam = strlen(s);
    
    char *copias=malloc((tam*n+1)*sizeof(char));
    
    if (copias != NULL ) {
        
        for (int k=0; k<n; k++) {
            for (int q=0; q<tam; q++) {
                copias[k*tam+q]=s[q];
            }    
        }
        
        copias[tam * n] = '\0';
        
        return copias;
        
    } else {
        
        return 0;
        
    }
    
}

int main () {
    
    char *s, *copias;
    int n, quant;
    
    printf ("Digite quantos caracteres você deseja que tenha na 1º palavra:\n");
    scanf ("%d", &quant);
    
    quant++;
    
    printf ("Digite quantas vezes você deseja que essa palavra se repita:\n");
    scanf ("%d", &n);
    
    getchar();
    
    s=malloc(quant*sizeof(char));
    
    if (s != NULL) {
        
        printf ("Digite a palavra desejada com %d caracteres:\n", quant-1);
        fgets (s, quant, stdin);
        
        s[strcspn(s,"\n")]='\0';
        
        copias=repetidor(s, n);
        
        if (copias != 0) {
            
            printf ("\nString original: %s\n", s);
            printf ("String repetida: %s", copias);
            
        } else {
            
            printf ("Não há memória suficiente para quantidade desejada...");
            
        }
        
    } else {
        
        printf ("Não há memória suficiente para quantidade desejada...");
        
    }

    return 0;
    
}
