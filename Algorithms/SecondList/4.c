#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media, notadeexame;
    
    printf ("Digite suas quatro notas:\n");
    scanf ("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
    
    media = (nota1+nota2+nota3+nota4)/4;
    
    if (media >= 7){
        printf ("Aprovado! Sua media é de %f\n", media);
    }
    else {
        if (media <= 7){
            printf ("Digite sua nota de exame:\n");
            scanf ("%f", &notadeexame);
            
            media = (nota1 + nota2 + nota3 + nota4 + notadeexame)/5;
            
            if (media >= 5){
                printf ("Aprovado em exame, sua média é de %f\n", media);
            }
            else {
                printf ("Não foi aprovado em exame, sua média é de %f\n", media);
            }
        }
    }

    return 0;
}
