#include <stdio.h>

int main()
{
    float x, y;
    
    printf ("Digite dois numeros, x e y:");
    scanf ("%f%f", &x, &y);
    
    if (x == 0 && y == 0) {
        printf ("O ponto está na origem");
    }
    else {
        if (x==0) {
            printf ("O ponto está no eixo y");
        }
        else {
            if (y==0) {
                printf ("O ponto está no eixo x");
            }
            else {
                if (x > 0 && y > 0) {
                    printf ("Q1");
                }
                else{
                    if (x > 0 && y < 0){
                        printf ("Q4");
                    }
                    else {
                        if (x < 0 && y > 0){
                            printf ("Q2");
                        }
                        else {
                            printf ("Q3");
                        }
                    }
                }
            }
        }
        
    }

    return 0;
}
