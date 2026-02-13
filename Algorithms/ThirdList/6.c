#include <stdio.h>

int main()
{
   int n, i;
   printf ("Quantas pessoas:\n");
   scanf ("%d", &n);
   float altura, maior=-1, soma=0;
   int cont=0, sexo;
   
   for (i=1; i<=n; i++){
       printf ("Digite a altura:\n");
       scanf ("%f", &altura);
       printf("Digite 1 para feminino ou 2 para masculino:\n");
       scanf("%d", &sexo);
       
        switch (sexo){
            case 2:
            if(altura>maior);
            maior=altura;
            break;
            case 1:
            cont++;
            soma=soma+altura;
            break;
        }    
   }
   
   printf("Maior altura entre homens é: %.2f\n", maior);
   printf("Média de altura das mulheres é %.2f\n", soma/cont);

    return 0;
}

