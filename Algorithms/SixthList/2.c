#include <stdio.h>

int main()
{
    float number1, number2, result;
    int operation;
    
    
    do{
        printf ("Type two numbers to do a operation:\n");
        scanf ("%f%f", &number1, &number2);
    
        printf ("Type: 1 - sum\n2 - subtraction\n 3- multiplication\n 4 - division\n 5 - to get out\n");
        scanf ("%d", &operation);

        switch( operation ){
            
            case 1:
                result=number1+number2;
                printf("The result of number1 + number2 is %f\n", result);
                break;
                
            case 2:
                result=number1-number2;
                printf("The result of number1 - number2 is %f\n", result);
                break;
                
            case 3:
                result=number1*number2;
                printf("The result of number1 + number2 is %f\n", result);
                break;
                
            case 4:
                result=number1/number2;
                printf("The result of number1 + number2 is %f\n", result);
                break;
                
            case 5:
                printf ("Let's get out of the calculator...");
                break;
        }

    }while (operation!=5);
    
    return 0;
}


