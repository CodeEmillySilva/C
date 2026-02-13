#include <stdio.h>

int main()
{   
    float whitevotes, invalidvotes, validvotes, some, percentagew, percentagei, percentagev;
    printf ("enter the number of white votes:");
    scanf ("%f", &whitevotes);
    printf ("enter the number of invalid votes:");
    scanf ("%f", &invalidvotes);
    printf ("enter the number of valid votes:");
    scanf ("%f", &validvotes);
    
    some = whitevotes + invalidvotes + validvotes;
    
    percentagew = (whitevotes*100)/some;
    
    percentagei = (invalidvotes*100)/some;
    
    percentagev = (validvotes*100)/some;
    
    printf ("The percentage of white votes is %f", percentagew, "% \n Of invalid votes is %f", percentagei,"\n Of valid votes is %f", percentagev);

    return 0;
}
