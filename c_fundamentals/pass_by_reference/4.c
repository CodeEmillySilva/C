#include <stdio.h>

void calcula_hora (int totalMinutos, int *ph, int *pm) {
    
    *ph=totalMinutos/60;
    *pm=totalMinutos%60;
    return;
}

int main () {
    
    int totalMinutos, h, m;
    
    printf ("Digite a quantidade de minutos passados ao longo do dia:\n");
    scanf ("%d", &totalMinutos);
    
    int *ph=&h;
    int *pm=&m;
    
    calcula_hora (totalMinutos, ph, pm);
    
    printf ("Se passaram %d horas e %d minutos.", *ph, *pm);
    
    return 0;
    
}
