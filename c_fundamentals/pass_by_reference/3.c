#include <stdio.h>
#include <math.h>


void calcula_circulo (float *p_raio, float *pPerimetro, float *pArea) {
    
    *pPerimetro = 2 * (*p_raio) * M_PI;
    *pArea = pow ((*p_raio), 2) * M_PI;
    
    return;
}

int main () {
    
    float raio, Perimetro, Area;
    
    printf ("Digite o raio:\n");
    scanf ("%f", &raio);
    
    float *p_raio = &raio;
    float *pPerimetro = &Perimetro;
    float *pArea = &Area;
    
    calcula_circulo (p_raio, pPerimetro, pArea);
    
    printf ("Perímetro: %f\nÁrea: %f", *pPerimetro, *pArea);
    
    return 0;
    
}
