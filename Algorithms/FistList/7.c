#include <stdio.h>

int main()
{
    
    float potencia, largura, comprimento;
   
    printf ("Qual é a potência das lâmpadas utilizadas? (em watts)\n");
    scanf ("%f", &potencia);
   
    printf ("Digite as dimensões (em metros):\n");
    scanf ("%f%f", &largura, &comprimento);
   
    float n_dewatts, n_delampadas;
    
    n_dewatts = 18 * (largura*comprimento);
    
    n_delampadas = n_dewatts / potencia;
    
    printf ("O números de lâmpadas necessarias é %f", n_delampadas);
 
    return 0;
}
