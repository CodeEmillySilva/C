#include <stdio.h>
#include <string.h>
#define N 10

int verificacao (char v[N]) {
    
    for (int i = 0; i < strlen(v); i++) {
        if (v[i]<'0' || v[i]>'9')
            return 0;
    }
    
    return 1;
}

int main () {
    
    char v [N];
    
    printf ("Digite 9 caracteres:\n");
    fgets (v, N, stdin);
    
    v[strcspn(v,"\n")]='\0';
    
    int x=verificacao (v);
    
    if (x==0) {
        printf ("O vetor não é composto apenas de inteiros.");
    } else {
        printf ("O vetor é composto apenas de inteiros.");
    }
    
    return 0;
}
