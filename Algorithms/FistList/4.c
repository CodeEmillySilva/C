#include <stdio.h>
#include <math.h>

int main()
{
    float volume, radius, height;
    
    printf ("Type the radius:");
    scanf ("%f", &radius);
    printf ("Type the height:");
    scanf ("%f", &height);
    
    volume = M_PI * radius * height;
    
    printf ("The volume is %f", volume);

    return 0;
}
