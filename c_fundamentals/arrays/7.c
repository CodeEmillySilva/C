#include <stdio.h>
#define M 4
#define N 3
#define O 5

void a_matriz (int a[N][M]) {

    printf ("Digite os números para matriz A:\n");
   
    for (int i=0; i<N; i++) {
       for (int j=0; j<M; j++) {
           scanf ("%d", &a[i][j]);
        }
    }
    return;
}

void b_matriz (int b[M][O]) {
    
    printf ("\nDigite os números para matriz B:\n");
   
   for (int i=0; i<M; i++) {
       for (int j=0; j<O; j++) {
           scanf ("%d", &b[i][j]);
        }
    }
    return;
}

void c_mult (int a[N][M], int b[M][O],int c[N][O]) {
    
    //Multplicação da Matriz A x Matriz B:
   
    for (int i=0; i<N; i++) {
        for (int j=0; j<O; j++) {
            int soma = 0;
            for (int k=0; k<M; k++) {
                soma+=a[i][k]*b[k][j];
            }
            c[i][j]=soma;
        }
    }
    return;
}

int main() {
    
   int a[N][M], b[M][O], c[N][O], i, j;
   
   a_matriz(a);
   b_matriz(b);
   c_mult(a, b, c);
   
    printf ("\nMatriz A:\n");
   
    for (i=0; i<N; i++) {
       for (j=0; j<M; j++) {
           printf ("%d\t", a[i][j]);
       }
       printf ("\n");
   }
   
   printf ("\nMatriz B:\n");
   
    for (i=0; i<M; i++) {
       for (j=0; j<O; j++) {
           printf ("%d\t", b[i][j]);
       }
       printf ("\n");
   }
   
   printf ("\nMatriz C\n");
   
   for (i=0; i<N; i++) {
       for (j=0; j<O; j++) {
           printf ("%d\t", c[i][j]);
       }
       printf ("\n");
   }
   
    return 0;
}
