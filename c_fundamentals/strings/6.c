#include <stdio.h>
#include <string.h>
#define N 6

void inverter_palavra (char v[N], char m[N]) {
    
    int j, k=0, i;
    
    while (v[k]!='\0') {
        k++;
    }
    
    for (i=0, j=k-1; j>=0; i++, j--) {
        
        m[i]=v[j];
        
    }
    
    m[j]='\0';
    
    return;
    
}

int main () {
    
    char v[N], m[N];
    
    printf ("Digite uma palavra de 5 letras:\n");
    fgets (v, N, stdin);
    
    v[strcspn(v,"\n")]='\0';
    
    inverter_palavra (v,m);
    
    printf ("A palavra invertida ficará %s", m);
    
    return 0;
    
}
