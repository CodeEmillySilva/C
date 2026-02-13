#include <stdio.h>

void troca_valor (float *x, float *y) {
    
    float aux=*x;
    *x=*y;
    *y=aux;
    
}

int main () {
    
    float a, b;
    
    printf ("Digite dois valores:\n");
    scanf ("%f%f", &a, &b);
    
    printf ("x = %f\ny = %f\n\n", a, b);
    
    float *x=&a;
    float *y=&b;
    
    troca_valor (x, y);
    
    printf ("x = %f\ny = %f", *x, *y);
    
    return 0;
    
}
