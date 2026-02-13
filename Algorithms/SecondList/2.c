#include <stdio.h>

int main()
{
    float altura, pesoideal;
    char c = 'c';

    printf ("Digite seu sexo biológico:");
    scanf ("%c", &c);    
    
    printf ("Digite sua altura:");
    scanf ("%f", &altura);
    
    if (c=='f' || c=='F') {
        pesoideal = (62.1*altura)-44.7;
        printf ("Seu peso ideal é %f", pesoideal);
    }
    
    else {
        pesoideal = (72.7*altura)-58;
        printf ("Seu peso ideal é %f", pesoideal);
    }
    
    return 0;
}

