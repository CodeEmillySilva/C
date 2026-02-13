#include <stdio.h>

int main()
{
    char n = 'n';
    printf ("Digite uma letra para executar uma tabuada:\n");
    scanf ("%c", &n);

    int cont = 1;
    
    while (cont <= 10) {
        printf ("%d%c\n", cont, n);
        cont++;
    }

    return 0;
}
