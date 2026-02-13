#include <stdio.h>

int main()
{
    float x, y, c1, c2, f1, f2, i;
    
    printf("Digite dois valores de graus Farenheit:\n");
    scanf ("%f%f", &x, &y);
    
    if (x>y){
        f1=y;
        f2=x;
    } else {
        f1=x;
        f2=y;
    }
    
    c1 = (f1-32) * 5/9;
    c2 = (f2-32) * 5/9;
    
    for (i=c1; i<=c2; i=i+2){
        printf ("%.2fº, ", i);
    }
    
    return 0;
}
