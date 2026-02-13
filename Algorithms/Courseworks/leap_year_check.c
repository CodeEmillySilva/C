#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano, valor1, valor2, valor3, valor4, valor5, valor6, valor7;
    
    
    printf ("Digite uma data colocando respectivamente dia, mês, ano:\n(obs: não utilize barras apenas espaços, e a data deve ser entre os anos 1800 e 2199)\n");
    scanf ("%d%d%d", &dia, &mes, &ano);
    
    if (!((ano%400 == 0) || ((ano%4 == 0) && (ano%100 != 0)))) {
        printf ("O ano não é bissexto, logo não existe dia 29 em fevereiro.\n");
    }
    
    else {
    
    if ( dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 1800 && ano <= 2199){ 
    
        valor1 = ano % 100;        //passo1
        
        // printf ("Os dois últimos números são %d\n", valor1);
    
        valor2 = valor1 / 4;    //passo2
        
        // printf ("O valor da divisão inteira é %d\n", valor2);
        
                                        //passo3

        if (ano%400 == 0 || ano%4 == 0 && ano%100 != 0) {   
            
            switch (mes) {
                case 1:
                case 4:
                case 7:
                    valor3 = 0;
                    break;
            
                case 2:
                case 8:
                    valor3 = 3;
                    break;
                
                case 3:
                case 11:
                	valor3 = 4;
                	break;
                
                case 5:
                	valor3 = 2;
                	break;
                
                case 6:
                	valor3 = 5;
                	break;
                
                case 9:
                case 12:
                	valor3 = 6;
                	break;
                
                case 10:
                	valor3 = 1;
                	break;
            
            }
            
            // printf ("O ano é bissexto, e o valor do mês é %d\n", valor3);
            
        } else {
            
            switch (mes) {
                case 1:
                case 10:
                    valor3 = 1;
                    break;
                case 2:
                case 3:
                case 11:
                    valor3 = 4;
                    break;
                case 4:
                case 7:
                    valor3 = 0;
                    break;
                case 5:
                    valor3 = 2;
                    break;
                case 6:
                    valor3 = 5;
                    break;
                case 8:
                    valor3 = 3;
                    break;
                case 9:
                case 12:
                    valor3 = 6;
                    break;
                
            }
            
            // printf ("O ano não é bissexto, e o valor do mês é %d\n", valor3);
            
        }
        
                                        //passo4
        
        if (ano >= 1800 && ano <= 1899) {
            valor4 = 2;
        } 
             else if (ano >= 1900 && ano <=1999) {
                 valor4 = 0;
             } 
                else if (ano >= 2000 && ano <= 2099) {
                    valor4 = 6;
                }
                    else if (ano >= 2100 && ano <= 2199) {
                        valor4 = 4;
                    }
                
            
            // printf ("O valor do ano é %d\n", valor4);
             
                                        //passo5
                                        
        valor5 = dia;
            // printf ("O valor do dia é %d\n",valor5);
        
                                        //passo6
                                        
        valor6 = valor1 + valor2 + valor3 + valor4 + valor5;
            // printf ("A soma total é %d\n",valor6);
        
                                        //passo7
                                        
        valor7 = valor6 % 7;
           // printf ("O resto da soma é %d\n",valor7);

        switch (valor7) {
            
            case 0:
                printf ("Sábado");
                break;
            case 1:
                printf ("Domingo");
                break;
            case 2:
                printf ("2º Feira");
                break;
            case 3:
                printf ("3º Feira");
                break;
            case 4:
                printf ("4º Feira");
                break;
            case 5:
                printf ("5º Feira");
                break;
            case 6:
                printf ("6º Feira");
                break;
        }
    }
     else {
        printf ("Entrada não válida :( \n");
    }
    }
   
    
    return 0;

}
