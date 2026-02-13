#include <stdio.h>

int main()
{
    int n, k, i, j, resultado, soma=0;
    
    printf ("Digite, respectivamente, o número para começar e quantos primos quererá posteriormente:\n");
    scanf ("%d%d", &k, &n);
    
    for (i=k; soma<n; i++) {
        resultado=0;
        for (j=2; j<=(i/2); j++) {
            if (i%j==0) {
                resultado++;
            }
        }
        
        if (resultado==0){
            printf ("%d é primo\n", i);
            soma++;
        }
    }
    return 0;
}
