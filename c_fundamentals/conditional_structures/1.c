#include <stdio.h>

int main()
{
   //1º Coordenadas de um ponto
    
    float x, y;
    printf("Digite dois valores para uma coordenada cartesiana, \"x\" e \"y\" respectivamente:\n");
    scanf ("%f%f", &x, &y);
    
    if (x==0 && y==0){
        printf ("Origem");
    } else if (x!=0 && y==0) {
        printf ("Eixo X");
    } else if (x==0 && y!=0) {
        printf ("Eixo Y");
    } else if (x>0 && y>0){
        printf ("Q1");
    } else if (x<0 && y>0){
        printf ("Q2");
    } else if (x<0 & y<0){
        printf ("Q3");
    } else if (x>0 && y<0){
        printf ("Q4");
    }

    return 0;
}
