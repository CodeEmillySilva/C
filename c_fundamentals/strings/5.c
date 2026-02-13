#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10

int verificacao (char v[N]) {
    
    int x=atoi (v);
    
    return x;
}

int main () { 
    
    char v [N];
    
    printf ("Digite um número de até 9 caracteres:\n");
    fgets (v, N, stdin); 
    v[strcspn(v,"\n")]='\0';
    
    int x=verificacao (v);
    
    if (x==0) {
        printf ("O vetor não é composto apenas de inteiros.");
    } else {
        printf ("O vetor é composto apenas de inteiros, e sua forma inteira é %d", x);
    }  
    return 0;
}
