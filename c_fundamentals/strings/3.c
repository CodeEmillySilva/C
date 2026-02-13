#include <stdio.h>
#include <string.h>
#define N 47

void palindrome (char palavra [N], char copia [N]) {
 
    int fim=0, i, j;
    
    while (palavra[fim]!='\0') {
        fim++;    
    }
    
    for (i=fim-1,j=0; i>=0; i--, j++) {
        copia[j]=palavra[i];
    }
    
    copia[j]='\0';
    
    return;

}

int main () {
    
    char palavra [N], copia [N], palavra2 [N];
    
    printf ("Digite uma string, a fim de verificar se ela é palíndrome ou não:\n");
    fgets (palavra, N, stdin);
    
    palavra [strcspn(palavra,"\n")]='\0';
    
    strcpy (palavra2, palavra);

    palindrome (palavra, copia);
    
    int x = strcmp (palavra2, copia);
    
    if (x==0) {
        
        printf ("A palavra é palíndrome");
        
    } else {
        
        printf ("A palavra não é palíndrome");
        
    }
    
    return 0;
    
}
