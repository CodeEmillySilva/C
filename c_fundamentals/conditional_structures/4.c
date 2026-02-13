#include <stdio.h>

int main()
{
    //4º Número de dias
    
    int dia, mes;
    
    printf ("Digite o dia e o mês do evento, respectivamente:\n");
    scanf ("%i%i", &dia, &mes);
    
    switch (mes){
        case 1:
            if (dia == 31){
                printf ("31 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", dia);
            }
        break;
        case 2:
            if (dia == 28){
                printf ("59 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", 31+dia);
            }
        break;
        case 3:
            if (dia == 31){
                printf ("90 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", 59+dia);
            }
        break;
        case 4:
            if (dia == 30){
                printf ("120 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", 90+dia);
            }
        break;
        case 5:
            if (dia == 31){
                printf ("151 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", 120+dia);
            }
        break;
        case 6:
            if (dia == 30){
                printf ("181 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", 151+dia);
            }
        break;
        case 7:
            if (dia == 31){
                printf ("212 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", 181+dia);
            }
        break;
        case 8:
            if (dia == 31){
                printf ("243 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", 212+dia);
            }
        break;
        case 9:
            if (dia == 30){
                printf ("273 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", 243+dia);
            }
        break;
        case 10:
            if (dia == 31){
                printf ("304 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", 273+dia);
            }
        break;
        case 11:
            if (dia == 30){
                printf ("334 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", 304+dia);
            }
        break;
        case 12:
            if (dia == 31){
                printf ("365 DIA(S) DO INICIO DO ANO ATÉ O EVENTO");
            } else {
                printf ("%i DIA(S) DO INICIO DO ANO ATÉ O EVENTO.", 334+dia);
            }
        break;
    }
    
    return 0;
}
