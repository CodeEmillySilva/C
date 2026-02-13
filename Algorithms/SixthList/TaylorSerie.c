#include <stdio.h>

int main()
{
    float x;
    int n, i, j;
    
    printf ("Digite o valor de x e o nº de termos:\n");
    scanf ("%f %d", &x, &n);
    
    float e_x=0;
    for(i=0; i<=n; i++){
        
        float pot=1;
        int fat=1;
        
        for (j=1; j<=i; j++){
            pot = pot*x;
            fat*j;
            
        }
        
        e_x=e_x+pot/fat;
        
    }
    
    printf ("E elevado %f = %f\n", x, e_x);
     
    return 0;
}
