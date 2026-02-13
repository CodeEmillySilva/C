#include <stdio.h>

void inc_dec (int *a, int *b) {
    
    (*a)++;
    (*b)--;
    
}

int main () {
    
    int x, y;
    
    printf ("Digite dois números, o primeiro para incrementar, o segundo para decrementar:\n");
    scanf ("%d%d", &x, &y);
    
    int *a=&x;
    int *b=&y;
    
    inc_dec (a, b);
    
    printf ("O valor de x:%d\nO valor de y:%d\n", *a, *b);
    
    return 0;
    
}
