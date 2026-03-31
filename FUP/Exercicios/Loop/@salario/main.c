#include <stdio.h>

void salaryIncrease(float salary);

int main(){
    float salary;

    scanf("%f", &salary);

    salaryIncrease(salary);

    return 0;
}

void salaryIncrease(float salary){
    float newSalary;

    if (salary <= 1000.000){
        newSalary = salary + (salary * 0.2);
        printf("%.2f\n", newSalary);
    } else if(salary > 1000.00 && salary <= 1500.00){
        newSalary = salary + (salary * 0.15);
        printf("%.2f\n", newSalary);
    } else if(salary > 1500.00 && salary <= 2000.00){
        newSalary = salary + (salary * 0.1);
        printf("%.2f\n", newSalary);
    } else if (salary > 2000.00){
        newSalary = salary + (salary * 0.05);
        printf("%.2f\n", newSalary);
    }
}