#include <stdio.h>

int main()
{
    int n, i;
    float x, y, z, media;
    
    printf ("Digite quantas vezes o processo será repetido:\n");
    scanf ("%d", &n);
    
    float v[n];
    
    for (i=0; i<n; i++) {
        printf ("Digite 3 números:\n");
        scanf ("%f%f%f", &x, &y, &z);
        
        media = ((x*2)+(y*3)+(z*5))/10;
        
        v[i]=media;
    }
    
    printf ("As medias são:\n");

    for (i=0; i<n; i++) {
        printf ("media %d: %.1f\n", i+1, v[i]);
    }
    
    return 0;
}
