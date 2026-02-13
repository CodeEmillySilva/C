#include <stdio.h>

int main()
{
    //3º Tempo de jogo
    
    //interessante validar que o número deve ser menor que 24 horas
    
    int inicio, final, soma, sub, soma1;
    
    printf ("Digite apenas o número correspondente ao início do jogo (00-23):\n");
    scanf ("%i", &inicio);
    printf ("Digite apenas o número correspondente ao final do jogo (00-23):\n");
    scanf ("%i", &final);
    
    if (final>inicio){
        printf ("O jogo durou %i horas", final-inicio);
    } else if (inicio>final){
        sub=24-inicio;
        soma1=sub+final;
        printf ("O jogo durou %i horas", soma1);
    } else if (inicio==final){
        printf ("O jogo durou 24 horas");
    }
    
    return 0;
}
