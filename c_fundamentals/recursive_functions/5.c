#include <stdio.h>

int fibo (int m) {
    if (m == 1 || m == 2) 
        return 2; 
    else
        return fibo(m - 1) + fibo(m - 2);
}

int main() {
    
    int n, i;
    
    do {
    printf("Digite o número de termos da sequência:\n");
    scanf("%d", &n);
    } while (n<=0);
    
    printf ("Os n termos são:\n");
    
    for (i=1; i<=n; i++) {
        printf ("%d", fibo(i));
        printf ("\t");
    }
	
	return 0;
}
