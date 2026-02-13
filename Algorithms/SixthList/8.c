#include <stdio.h>

int main()
{
    int n;
    printf ("Type a number:");
    scanf ("%d", &n);
    
    int i = 1;
    
    if (n != 0) {
     
        while (i <= n){
            printf ("%d \n", i);
            i = i+2;
        }
        
    }
    
    
    return 0;
}


