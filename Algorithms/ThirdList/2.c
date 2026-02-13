#include <stdio.h>

int main()
{
    int x, y, num1, num2, i, cout=0;
    
    printf ("Digite dois números:\n");
    scanf ("%d%d", &x, &y);
    
    if (x>y){
     
     num1=y;
     num2=x;
        
    }
    else {
        
        num1=x;
        num2=y;
        
    }
    
    if (num1%2!=0 && num2%2!=0){
        for (i=num1+2; i<num2; i=i+2){
            printf ("+(%d)", i);
            cout=cout+i;
        }
        printf ("\nO valor da soma é %d", cout);
        
    } else if (num1%2!=0 && num2%2==0){
        for (i=num1+2; i<=num2; i=i+2){
            printf ("+(%d)", i);
            cout=cout+i;
        }
        printf("\nO valor da soma é %d", cout);
        
    } else if (num1%2==0 && num2%2!=0){
        for (i=num1+1; i<num2; i=i+2){
        printf ("+(%d)", i);
        cout=cout+i;
        }
        printf ("\nO valor da soma é %d", cout);
        
    } else if (num1%2==0 && num2%2==0){
        for (i=num1+1; i<=num2; i=i+2){
            printf ("+(%d)", i);
            cout=cout+i;
        }
        printf ("\nO valor da soma é %d", cout);
    }
    
    return 0;
}
