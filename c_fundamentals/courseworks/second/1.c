#include <stdio.h>
#include <locale.h>
#define N 11
#define M 6

int concatena (char s1 [N], char s2 [M]) {
    
    int i=0, j=0;
    
    while (s1[i]!='\0') {
        i++;
    }
    
    while (s2[j]!='\0') {
        j++;
    }
    
    if (i+j<N) {
        
        for (int t=0; t<=j; t++) {
            s1 [i+t] = s2 [t];
        }
        
        s1[i+j] = '\0';
        
        return 1;
        
    } else {
        
        return 0;
        
    }
    
}

int main () {
    
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    char s1 [N], s2 [M];
    
    printf ("Digite duas sequências de caracteres para serem concatenadas:\n");
    
    printf ("Digite a primeira sequência, no máximo %d\n", M-1);
    fgets (s1,N,stdin);
    
    printf ("Digite a segunda sequência, no máximo %d\n", M-1);
    fgets (s2,M,stdin);
    
    for (int i = 0; i<N-1; i++) {
        if (s1[i]=='\n')
            s1[i] = '\0';
    }
    
    for (int i = 0; i<N-1; i++) {
        if (s2[i]=='\n')
            s2[i] = '\0';
    }
    
    int x = concatena (s1, s2);
    
    if (x==1) {
    
        printf ("As duas sequências concatenadas ficam: %s", s1);
        
    } else {
        
        printf ("Ops! Não há espaço suficiente para concatenação, por favor ao refazer o processo siga a risca o valores mencionados");
    }
    
    return 0;
    
}
