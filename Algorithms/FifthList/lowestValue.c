#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define X 30

int main()
{
    int v[N], i, menor;
    
    srand (time(NULL));
   
    for (i=0; i<N; i++){
        
        v[i]=rand() % X;
        
        printf ("%dº: %d\t", i, v[i] );
       
    }
    
    menor = v[0];
    
    for(i=1; i<N; i++){
        if(menor>v[i]){
            menor=v[i];
        }
    }
    
    printf ("\nO menor valor do vetor é: %d", menor );
    
    int chave;
	printf("\nDigite o valor a ser buscado: ");
	scanf("%d", &chave);
	
	int achou = 0;
	int ini = 0, fim = N-1, meio;
	int cont = 0;
	do{
		cont++;
		meio = ( ini + fim ) / 2;
		if( v[meio] == chave )
			achou = 1;
		else
			if( v[meio] < chave )
				ini = meio + 1;
			else
				fim = meio - 1;
	}while( !achou && ini <= fim );
	
	if( achou )
		printf("Encontrado em %d.\n", meio );
	else
		printf("Nao encontrado!\n");
	
	printf("Executado com %d iteracoes.\n", cont );
    
    return 0;
}
