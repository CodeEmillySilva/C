#include <stdio.h>
#include <stdlib.h>

int e_digito (char *x) {
    
    int num = atoi (x);
    
    if (num>=0 && num<=9) {
        return num;
    } else {
        return -1;
    }
}

int main() {
    
    char a[100];
    
    printf ("Digite um número de 0 a 9:\n");
    fgets (a, sizeof(a), stdin);
    
    int aux = e_digito (a);
    
    if (aux == -1) {
        printf ("O caracter digitado não é um número entre 0 e 9");
    } else {
        printf ("O número digitado em char em int é %d", aux);
    }

    return 0;
}
