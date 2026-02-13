#include <stdio.h>
#include <stdlib.h>

int e_triangulo (float a, float b, float c) {
    if (a>=b+c || b>=a+c || c>=b+a) {
        return 0;
    } else if (a==b && a==c) {
        return 1;
    } else if (a==b || a==c || b==c) {
        return 2;
    } else {
        return 3;
    }
}

int main()
{   
    float x, y, z;
    printf ("Digite três números a fim de fazer um triângulo:\n");
    scanf ("%f%f%f", &x, &y, &z);
    
    int num = e_triangulo (x, y, z);
    
    if (num == 0) {
        printf ("Os números não formam triângulo");
    } else if (num == 1) {
        printf ("Os números formam um triângulo equilátero");
    } else if (num == 2) {
        printf ("Os números formam um triângulo isósceles");
    } else {
        printf ("Os números formam um triângulo escaleno");
    }
    
    return 0;
}
