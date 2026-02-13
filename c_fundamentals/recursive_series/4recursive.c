#include <stdio.h>

float somatorio (int n) {
    
    if (n==1)
        return 1;
        
    if (n%2!=0)
        return 1.0/n+somatorio(n-1);
    
    if (n%2==0)
        return -1.0/n+somatorio(n-1);
        
}

int main () {
    
    int n;
    
    printf ("Digite quais serão o n termos:\n");
    scanf ("%d", &n);
    
    float soma=somatorio(n);
    
    printf ("O valor da soma é de: %f", soma);
    
    return 0;
}
