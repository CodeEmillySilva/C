#include <stdio.h>

int main()
{
    int numero, negativo=0, positivo=0, impar=0, par=0;
    
    do{
        printf ("Digite um valor, caso queira parar digite 0:\n");
        scanf ("%d", &numero);
        
        if (numero != 0){
            if (numero < 0){
                negativo+=1;
            }
            if (numero > 0){
                positivo+=1;
            }
            if (numero%2 == 0){
                par+=1;
            }
            if (numero%2 != 0){
                impar+=1;
            }
        }
    } while (numero != 0);
    
    printf ("VALORES DIFERENTES DE ZERO:\nPares: %d\nÍmpares: %d\nPositivos: %d\nNegativos: %d\n", par, impar, positivo, negativo);
    return 0;
}
