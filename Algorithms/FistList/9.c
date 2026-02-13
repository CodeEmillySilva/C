#include <stdio.h>

int main()
{
    int dinheiro, notasde50, notasde20, notasde10, notasde5, notasde2, moedasde1;
    int restode50, restode20, restode10, restode5;
    
    printf ("Digite uma quantia de dinheiro:\n");
    scanf ("%d", &dinheiro);
    
    notasde50 = dinheiro/50;
    restode50 = dinheiro%50;
    notasde20 = restode50/20;
    restode20 = restode50%20;
    notasde10 = restode20/10;
    restode10 = restode20%10;
    notasde5 = restode10/5;
    restode5 = restode10%5;
    notasde2 = restode5/2;
    moedasde1 = restode5%2;
    
    printf ("Notas de 50: %d\n", notasde50);
    printf ("Notas de 20: %d\n", notasde20);
    printf ("Notas de 10: %d\n", notasde10);
    printf ("Notas de 5: %d\n", notasde5);
    printf ("Notas de 2: %d\n", notasde2);
    printf ("Moedas de 1: %d\n", moedasde1);
    
    return 0;
}
