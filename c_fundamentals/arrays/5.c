#include <stdio.h>

void qual_mes (int _dias, int *dia, int *mes) {
    
    int v[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}, qtd=0;
    
    for (int i=1; i<=12; i++) {
        
        qtd+=v[i];
        
        if (_dias<=qtd) {
            *mes=i;
            *dia=_dias-qtd+v[i];
            return;
        }
    }
}

int main () {
    int dias, dia, mes;
    do {
    printf ("Digite a quantidade de dias transcorridos:\n");
    scanf ("%d", &dias);

    } while (dias <= 0 || dias > 365);
    
    qual_mes (dias, &dia, &mes);
    
    printf ("O valor representa o dia %d do mês %d", dia, mes);
    
    return 0;
}
