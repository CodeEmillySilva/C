#include <stdio.h>

float pi_nila (int n) {
    
    if (n==1) {
        return 3;
    } else {
        if (n%2!=0)
            return 4.0/(2*i) * (2*i+1) * (2*i+2) + pi_nila(n-1);
        else
            return -4.0/(2*i) * (2*i+1) * (2*i+2) + pi_nila(n-1);
    }
}

int main () {
    
    int n;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    float serie_pi = serie_nila(n);
    
    printf("O valor aproximado de pi é: %f\n", serie_pi);

    return 0;
}
