#include <stdio.h>
#include <stdlib.h>

int main () {
    
    float *v[5];
    
    int i, num;
    
    do {
    printf ("Digite o número de notas que cada estudante terá:\n");
    scanf ("%d", &num);
    } while (num<=0);
    
    for (i=0; i<5; i++) {
        v[i] = malloc (sizeof(int)*num);
    }
    
    for (i=0; i<5; i++) {
        printf ("Digite as notas do %dº aluno:\n", i+1);
        for (int j=0; j<num; j++) {
            printf ("%dº nota: ", j+1);
            scanf ("%f", &v[i][j]);
        }
        printf ("\n");
    }
    
    printf ("Notas de todos os alunos:\n");
    
    for (i=0; i<5; i++) {
        printf ("Notas do %dº aluno:\n", i+1);
        for (int j=0; j<num; j++) {
            printf ("%dº nota: %.2f\t", j+1, v[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
    
}
