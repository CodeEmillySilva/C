#include <stdio.h>

int main()
{
    int i, parteinteira, raiz;
    
    printf ("Digite um número que queiras saber a raíz inteira do mesmo:\n");
    scanf ("%d", &raiz);
    
    parteinteira = 0;
    i = 1;
    
    for (i = 1; i <= raiz; i = i + 2) {
        raiz = raiz - i;
        parteinteira = parteinteira + 1;
    }
    
    printf ("A parte inteira da raíz digitada é %d\n", parteinteira);
    
    return 0;
}
