#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int *v=NULL, *vp=NULL, *vn=NULL, num, tam_v=0, tam_vp=0, tam_vn=0, i;
    char parar;
    
    do {
        
        printf ("Digite o número desejado, no intervalo dos inteiros positivos e negativos:\n");
        scanf ("%d", &num);
        
        v=realloc(v,(tam_v+1)*sizeof(int));
        
        if (v==NULL) {
            printf ("Não há espaço na memória para tal armazenamento:\n");
            parar='S';
        } else {
            
            v[tam_v++]=num;
            
            if (num<0) {
                
                vn=realloc(vn,(tam_vn+1)*sizeof(int));
                
                if (vn==NULL) {
                    printf ("Não há espaço na memória para tal armazenamento:\n");
                    break;
                } else {
                    vn[tam_vn++]=num;
                }
                
            } else {
                
                vp=realloc(vp,(tam_vp+1)*sizeof(int));
                
                if (vp==NULL) {
                    printf ("Não há espaço na memória para tal armazenamento:\n");
                    break;
                } else {
                    vp[tam_vp++]=num;
                }
                
            }
            
            printf ("Deseja continuar, digite 'S' para sim, e 'N' para não\n");
            scanf (" %c", &parar);
            
        }
        
    } while (parar!='S');
    
    printf("Vetor v:\n");
    
    for (i = 0; i < tam_v; i++) {
        printf("v[%d]: %d\t", i, *(v+i));
    }
    
    printf("\nVetor vp:\n");
    for (i = 0; i < tam_vp; i++) {
         printf("vp[%d]: %d\t", i, *(vp+i));
    }
    printf("\nVetor vn:\n");
    for (i = 0; i < tam_vn; i++) {
        printf("vn[%d]: %d\t", i, *(vn+i));
    }

    free(v);
    free(vp);
    free(vn);
    
    return 0;
    
}
