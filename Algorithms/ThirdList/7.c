#include <stdio.h>

int main()
{
    float ma, mh, soma2 = 0;
    int n, i, x, soma1 = 0;
    
    printf ("Quantos numeros?\n");
    scanf ("%d", &n);
    for( i = 1 ; i <= n ; i++ ){
        do{
            printf("Digite o %do numero:", i);
            scanf("%d", &x);
        }while( x <= 0 );
        soma1 = soma1 + x;
        soma2 = soma2 + 1.0/x;
    }
    
    ma = (float)soma1 / n;
    mh = n / soma2;
    printf("Media aritmetica: %f\n", ma);
    printf("Media harmonica: %f\n", mh);
    
    return 0;
    
    do {
        
        ma = n/i;
        mh = i/(1/n);
        
        i++;
        
    } while (n>=1 && n!=0);
    return 0;
}


