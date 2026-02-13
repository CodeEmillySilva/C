#include <stdio.h>

int main()
{
    int n_maior, n_menor, i, cout, cont = 1;
    
   do {
        printf("Digite um sequência, e quando quiser parar digite 0:\n");
        scanf ("%d", &i);
        
        if(cont == 1){
            n_menor=i;
            n_maior=i;
        }
        else{
            if(i != 0){
                if (i<n_menor){
                    n_menor=i;
                }
                if (i>n_maior){
                    n_maior=i;
                }
            }
        }
        
        cont++;
    } while (i!=0);
        
        cout=n_maior-n_menor;
        
    printf ("A amplitude dos números é %d", cout);
    
    return 0;
}



