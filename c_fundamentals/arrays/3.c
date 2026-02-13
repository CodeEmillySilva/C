#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
#define X 10

int main() {
    
    srand(time(NULL));
    
    int i, v[N], s=0, mult;
    
    for (i=0; i<N; i++) {
        v[i]=rand()%X;
        printf ("%dº: %d\t", i+1, v[i]);
    }
    printf ("\n\n");
    for (i=0; i<N/2; i++) {
        mult=v[i]-v[N-1-i];
        s+=mult*mult;
        printf ("soma %dº: %d\n", i+1, s);
    }
    
    return 0;
}
