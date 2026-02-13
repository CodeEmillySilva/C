#include <stdio.h>

int main()
{
    float employeesalary, IR, INSS, Sindicato, SalarioLiquido;
    printf ("Enter the employee's salary:");
    scanf ("%f", &employeesalary);
    
    IR = (15*employeesalary)/100;
    INSS = (11*employeesalary)/100;
    Sindicato = (3*employeesalary)/100;
    SalarioLiquido = employeesalary - (IR+INSS+Sindicato);
    
    printf ("Salario bruto : R$ %f",employeesalary);
    printf (" \n - IR (15%) : R$ %f", IR);
    printf (" \n - INSS (11%) : R$ %f", INSS);
    printf (" \n - Sindicato (3%) : R$ %f", Sindicato);
    printf (" \n Salario Liquido : R$ %f", SalarioLiquido);
    
    return 0;
}
