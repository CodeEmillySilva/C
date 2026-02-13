#include <stdio.h>

int main()
{
    float f;
    printf ("Write the temperature in Fahrenheit:");
    scanf ("%f", &f);
    
    float c;
    c = 5 * (f - 32) / 9;
    
    printf ("The temperature in Celsius is %f", c);

    return 0;
}
