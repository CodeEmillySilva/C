#include <stdio.h>
#define N 27
int verificacao (char alfabeto [N], char m) {    
    int cont=0;   
    for (int i=0; i<N-1; i++) {
        if (m== alfabeto[i]) {
            cont++;
        }
        
    }    
    
    if (cont!=0) {
        return cont; 
    } else {
        return 0;
    }
}

int main () {
    char c, v [N] = "abcdefghijklenopqrstuewxyz";    
    printf ("Digite uma letra a ser procurada na 'string alfabeto', deve ser minúscula:\n");
    scanf ("%c", &c);    
    int check = verificacao (v, c);   

    if (check == 0) {
        printf ("A string não contém o item digitado.");
    } else {
        printf ("Na 'string alfabeto', a letra minúscula %c aparece %d vezes.", c, check);    
    }
    return 0;

}
