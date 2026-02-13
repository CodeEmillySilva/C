#include <stdio.h>

int numeros_primos (int x, int m) {
     int i, j, resultado, soma=0;

    for (i=x; soma<m; i++) {
        resultado=0;
        for (j=2; j<=(i/2); j++) {
            if (i%j==0) {
                resultado++;
                break;
            }
        }
        
        if (resultado==0 && i!=1){
            printf ("%d é primo\n", i);
            soma++;
        }
    }
}

int main()
{
    int k, n;
    printf ("Digite, respectivamente, o número para começar e quantos primos quererá posteriormente:\n");
    scanf ("%d%d", &k, &n);
    
    numeros_primos (k,n);
    
    return 0;
}
