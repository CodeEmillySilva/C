#include <stdio.h>
#include <locale.h>
#define N 11

int verificacao (char v [N]) {
    
    int cont=0;
    
    if (v[2]!='/' || v[5]!='/')
        return 0;
    
    for (int i=0; i<N-1; i++) {
        if (i==2 || i==5) {
            continue;
        } else if (v[i]<'0' || v[i]>'9') {
            cont++;
        }
    }
    
    if (cont != 0) {
        return 0;
    } else {
        return 1;
    }

}

void inverte (char date[N], int *day, int *month, int *year) {

    int i;
    
    for (int i = 0; i < N-1; i++){
        
        if (i<=9 && i>=6) {
            *year = (*year)*10 + (date [i] - '0');
        }
        
        if (i<=4 && i>=3) {
            *month = (*month)*10 + (date [i] - '0');
        }
        
        if (i<=1 && i>=0) {
            *day = (*day)*10 + (date [i] - '0');
        }
        
    }

}

int main () {
    
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    char data [N];
    int x=0, check=0, dia=0, mes=0, ano=0;
    
    do {
        
        if (check==0) {
            printf ("Digite uma data no seguinte formato: DD/MM/AAAA\n");
           
        } else {
            printf ("Por favor, certifique-se de digitar uma data exatamente no seguinte formato: DD/MM/AAAA\n");
        }
        
        scanf ("%10s", data);
        
        for (int i = 0; i<N-1; i++) {
            if (data[i]=='\n')
                data[i] = '\0';
        }
            
        x = verificacao (data);
        
        check++;
  
    } while (x==0);
    
    int *pdia=&dia, *pmes=&mes, *pano=&ano;
    
    inverte (data, pdia, pmes, pano);
    
    if (*pdia>31 || *pdia==0 || *pmes>12 || *pmes==0 || *pano==0) {
        
        printf ("Ops! A data digitada é inválida...\n");
        
    } else {
    
        printf ("A mesma data, mas agora com os números em seus repectivos formatos inteiros: %d/ %d/ %d", *pdia, *pmes, *pano);
        
    }
    
    return 0;
    
}
