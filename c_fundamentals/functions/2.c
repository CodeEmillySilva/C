#include <stdio.h>

int tres_valores (int a, int b, int c) {
    int aux;
    if (a<b){
        aux=a;
        a=b;
        b=aux;
    }
    if (b<c) {
        aux=b;
        b=c;
        c=aux;
    }
    if (a<b) {
        aux=a;
        a=b;
        b=aux;
    }
    
    return a;
        
}

int main()
{
    int x, y, z;
    printf ("Digite dois números:\n");
    scanf ("%d%d%d", &x, &y, &z);
    
    int maior = tres_valores (x, y, z);
    
    printf ("O maior valor é %d", maior);

    return 0;
}
