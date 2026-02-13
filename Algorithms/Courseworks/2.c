#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, i, mmc, mdc;
    char n;
    
    printf ("Vamos calcular o MMC e o MDC? Se sim digite 's' caso contrário digite 'n':\n");
    scanf (" %c", &n);
    
    do {  
        
        if (n == 's' || n == 'S'){
        
            printf ("Digite dois números:\n");
            scanf ("%d%d", &num1, &num2);
            
                while (num1 <= 0 || num2 <= 0){
                    printf ("Entrada não validada, por favor digite dois números inteiros e positivos:\n");
                    scanf ("%d%d", &num1, &num2);
                }
    
                    i=2;
                    mmc=1;
                    mdc=1;
    
                    while (num1!=1 || num2 != 1){
        
                        if (num1%i!=0 && num2%i!=0){
                            i++;
                        }
                        else {
                            if (num1%i==0 && num2%i==0){
                                    mdc = mdc * i;
                            }
            
                            if (num1%i==0 || num2%i==0){
                                mmc=mmc*i;
                                if(num1%i==0){
                                    num1=num1/i;
                                }
                                if(num2%i==0){
                                    num2=num2/i;
                                }
                            }
                        }
                    }
        
        	printf ("O MMC é: %d\n", mmc);
        	printf ("O MDC é: %d\n", mdc);
      
        	printf ("Queres continuar calculando o MMC e o MDC? Se sim digite 's' caso contrário digite 'n':\n");
        	scanf (" %c", &n);
        
        } 
         else {
            break;
        }   
        
    } while (n != 'N' || n != 'n'); 
    
    return 0;
}

