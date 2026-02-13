#include <stdio.h>

int main()
{
    //2º Tipos de triângulos
    
    float a, b, c, aux;
    int i;
    
    printf ("Digite 3 valores quaisquer:\n");
    scanf ("%f%f%f", &a, &b, &c);
    
    do{
        if (a<c){
            aux=c;
            c=a;
            a=aux;
        }
        if (a<b){
            aux=b;
            b=a;
            a=aux;
        }
        if (b<c){
            aux=c;
            c=b;
            b=aux;
        }
        
    } while (a<c || a<b || b<c);
    
    printf ("\n%f\t%f\t%f\t\n", a, b, c);
    
    if (a>=(b+c)){
        printf ("Não forma triângulo\n");
    } else if (a*a == (b*b + c*c)){
        printf ("Triângulo retângulo\n");
    } else {
        
        if (a*a > (b*b + c*c)) {
            printf ("Triângulo obtusângulo\n");
    }
        if (a*a < (b*b + c*c)){
            printf ("Triângulo acutângulo\n");
    }
        if (a == b && b == c && a==c) {
            printf ("Triângulo equilátero\n");
    }
        if ((a==b && a!=c) || (a==c && c!=b) || (b==c && b!=a)){
            printf ("Triângulo isósceles\n");
    }
    
    }
    
    return 0;
}
