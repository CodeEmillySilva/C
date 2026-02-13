#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define N 12

int
main ()
{
    setlocale (LC_ALL, "Portuguese");

    char cpf[N];
    int cpf_[N], i, j=10, cont=0, inteiros=0, soma1=0, k=11, multi1, resto1, soma2=0, multi2, resto2;
    
    printf ("Digite um CPF, apenas com números, sem traços, pontos ou letras:\n");
    fgets (cpf, N, stdin); // Já foi verificado que o vetor tem apenas 11 números

    for (i = 0; i < N - 1; i++){
        cpf_[i] = cpf[i] - 48;
        
        if (cpf_[i]>=0 && cpf_[i]<=9){
            inteiros++;
        }
        
    }
    
    if (inteiros!=11){
        printf ("Há caracteres que não estão no intervalo 0 e 9...\n"); // Já foi verificado que há apenas números do intervalo de 1 a 9
        
    } else {
        for (i=1; i<N-1; i++){
            if (cpf_[i]==cpf_[0]){
                cont++; //contador que se der 10 significará que os números são todos iguais
            }
        }
        
        if (cont==10){
            printf ("Os números são todos iguais, o CPF é inválido...\n\n");
        } else {
            for (i=0; i<N-3; i++){
                soma1=soma1+cpf_[i]*j;  //soma e multiplicação dos 9 primeiros números
                j--;
            }
            
            multi1=soma1*10; 
            resto1=multi1%11;
            
            if (resto1==10){
                resto1=0;
            }
            
            if (resto1==cpf_[9]){
                printf ("O primeiro valor foi válidado, resto %d é igual ao 10º valor %d\n\n", resto1, cpf_[9]);
                
                for (i=0; i<N-2; i++){
                    soma2=soma2+cpf_[i]*k;  //soma e multiplicação dos 10 primeiros números
                    k--;
                }

                multi2=soma2*10;
                resto2=multi2%11;
                
                    if (resto2==10){
                        resto2=0;
                    }
                    
                    if(resto2==cpf_[10]){
                        printf ("O segundo valor foi válidado, resto %d é igual ao 11º valor %d\n, CPF VÁLIDO :)\n\n", resto2, cpf_[10]);
                    } else {
                        printf ("Apesar do 1º dígito ter sido validado, o segundo não foi, CPF inválido :(\n\n");
                    }
                    
            } else {
                printf ("Valor do primeiro resto é diferente do 1º dígito verificador, CPF inválido...\n");
            }
        }
        
        
    }
    
  return 0;
}
