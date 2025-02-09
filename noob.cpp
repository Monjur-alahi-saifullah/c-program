#include<stdio.h>
int main()
{
    float basic_salary, medical_llowance, house_rent, total_salary;
    printf(" Enter Basic Salary: ");
    scanf("%f",&basic_salary);

    medical_llowance = 0.4 * basic_salary;
    house_rent = 0.2 * basic_salary;

    total_salary = basic_salary + medical_llowance + house_rent;

    printf(" Basic Salary: %.1f\n",  basic_salary);
    printf(" Medical Allowance: %.1f\n", medical_llowance);
    printf(" House Rent: %.1f\n\n", house_rent);
    printf(" Total Salary: %.1f\n", total_salary);
    return (0);
}
