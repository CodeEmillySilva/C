#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 10

void preenche_vetor (int n, int v[n]) {
    for (int i=0; i<n; i++) {
        v[i]=rand()%X;
    }
}

void mostra_vetor (int n, int v[n]) {
    for (int i=0; i<n; i++) {
        printf ("%dº: %d\t", i+1, v[i]);
    }
    printf ("\n");
}

void ordena_vetor (int n, int v[n]) {
    for (int i=0; i<n-1; i++){
        int num=i;
        for (int j=i+1; j<n; j++) {
            if (v[num]>v[j])
                num=j;
        }
        
        if (num!=i) {
            int aux=v[i];
            v[i]=v[num];
            v[num]=aux;
        }
    }
    
}

int busca_binaria_chave (int t, int v[t], int chave) {

	int  inicio = 0, fim = t-1, meio;
	
	while (inicio <= fim) {
	    meio=(inicio+fim)/2;
	    if (v[meio]==chave){
	        return meio;
	    } else if (v[meio]>chave) {
	        fim=meio-1;
	    } else {
	        inicio=meio+1;
	    }
	}
	
	return -1;
	
}

int main () {
    
    srand(time(NULL));
    
    int n, achar;
    
    do {
        printf ("Digite o tamanho do seu vetor, deve ser maior que 0\n");
        scanf ("%d", &n);
        
    } while (n<=0);
    
    int v[n];
    
    printf ("Digite um número para ser buscado no vetor:\n");
    scanf ("%d", &achar);
    
    preenche_vetor (n, v);
    printf ("Vetor original:\n");
    mostra_vetor (n, v);
    
    ordena_vetor (n, v);
    printf ("Vetor ordenado:\n");
    mostra_vetor (n, v);
    
    int encontrou = busca_binaria_chave (n, v, achar);
    
    if (encontrou!=-1)
        printf ("O número foi achado no indice v[%d].\n", encontrou);
    else
        printf ("O número não foi achado... :(\n");
    
    return 0;
}
