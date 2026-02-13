#include <stdio.h>

int main()
{
   float inicialvelocity,acceleration, second, velocity;
   
   printf ("Type the inicial velocity (m/s):");
   scanf ("%f", &inicialvelocity);
   printf ("Type the acceleration (m/s2):");
   scanf ("%f", &acceleration);
   printf ("Type time:");
   scanf ("%f", &second);
   
   velocity = inicialvelocity + acceleration*second;
   
   printf ("The velocity is %f",velocity);
   
    return 0;
}
