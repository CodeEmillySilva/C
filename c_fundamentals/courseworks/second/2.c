#include <stdio.h>
#include <locale.h>
#define N 51

int aumentar (char mM [N]) {
    
    for (int i=0; mM[i]!='\0'; i++) {
        if (mM[i]>='0' && mM[i]<='9') {
            continue;
        } else if (mM[i]>='a' && mM[i]<='z') {
                mM[i]=mM[i]-32;
        }
    }

}

int main () {
    
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    char mM [N];
    
    printf ("Digite uma sequência de até %d caracteres, com a finalidade de transformar minúsculas em maiúsculas:\n", N-1);
    printf ("Obs: caso mais de %d caracteres sejam digitados os excedentes serão ignorados...\n", N-1);
    fgets (mM, N, stdin);
    
    for (int i = 0; i<N-1; i++) {
        if (mM[i]=='\n')
            mM[i] = '\0';
    }
    
    int t = aumentar (mM);
    
    printf ("A sequência com a letras em maiúsculo: %s", mM);

    return 0;
    
}
