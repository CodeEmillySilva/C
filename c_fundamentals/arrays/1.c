#include <stdio.h>
#include <math.h>

int main () {
    
    printf ("1.a ) e 1.b)\n\n");
    
    int v[100], i, j=0;
    for (i=0; i<100; i++) {
        v[i]=71;
        printf ("%iº = %i\t", i+1, v[i]);
    }
    
    printf ("\n\n1.c) e 1.d)\n\n");
    
    for (i=0; i<100; i++) {
        v[i]=i+1;
        printf ("%iº: %i\n", i+1, v[i]);
    }
    
    printf ("\n\n1.e) e 1.f)\n\n");
    
    for (i=0; i<100; i++) {
        
        int is_sqrt = sqrt (i);
        
        if (is_sqrt*is_sqrt==i)
            printf ("%dº: %d\t", i, 1);
        else 
            printf ("%dº: %d\t", i, 0);
    }

    return 0;
}
