#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6
#define X 50

int main()
{
    srand (time(NULL));
    
    int i, j, v[N], aux;
    
    for (i=0; i<N; i++){
        v[i]  = rand() % X;
        printf ("%dº: %d\t", i, v[i]);
    }
    
    printf ("\n\n");
    
    for (i=1; i<N; i++){
        
        aux=v[i];
        j=i-1;
        
        while ((j>=0) && (aux<v[j])){
            v[j+1]=v[j];
            j--;
        }
        
        v[j+1]=aux;
    }
    
    for (j=0; j<N; j++){
        printf ("%dº: %d\t", j, v[j]);
    }
    
    int chave;
	printf("\nDigite o valor a ser buscado: \n");
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
