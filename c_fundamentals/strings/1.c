#include <stdio.h>
#define N 27

int verificacao (char alfabeto [N], char m) {
    
    int cont=0;
    
    for (int i=0; i<N-1; i++) {
        if (m== alfabeto[i]) {
            return 1;
        } else {
            cont++;
        }
        
    }
    
    if (cont!=0)
        return 0;
    
}

int main () {

    char c, v [N] = "abcdefghijklmnopqrstuvwxyz";
    
    printf ("Digite uma letra a ser procurada na 'string alfabeto', deve ser minúscula:\n");
    scanf ("%c", &c);
    
    int check = verificacao (v, c);
    
    if (check == 1) {
        
        printf ("A 'string alfabeto', contém a letra minúscula %c.", c);
        
    } else {
        
        printf ("A string não contém o item digitado.");
        
    }
    
    return 0;

}
