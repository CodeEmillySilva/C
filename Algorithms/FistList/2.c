#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distance, hour, velocity;
    char pilotsname [51];
    
    printf ("Enter the pilot's name:\n");
    fgets (pilotsname, 51, stdin);
  
    printf ("Enter the distance you traveled in km:\n");
    scanf ("%f", &distance);
 
    printf ("Enter the time you spent on this route:\n");
    scanf ("%f", &hour);
  
    velocity = distance/hour;
  
    printf ("The speed covered by %s was %f km/h.", pilotsname, velocity);
    
    return 0;
}
