#include <stdio.h>

int main() {
    
    int k, n=1;
    
    for (k=1; k<16; k++) {
        
        float x;
        int i, j;
        
        x=1;
        
        float e_x = 0; // inicializa somatório com zero
            for( i = 0 ; i <= n ; i++ ){ // gera os termos
                float termo = 1;
                for( j = 1 ; j <= i ; j++ ){
                    termo = termo * x / j;
                }
                e_x = e_x + termo; // Acumula termo no somatório
            }
        printf("%dº Termo elevando %.3f = %.15f\n", k, x, e_x);
        
        n++;
    }
    
    return 0;
}
