#include <cs50.h>
#include <stdio.h>

int employeeBonus(int salary);

int main(void){
    int employeeSalary = get_int("What is your salary? ");

    int salaryBonus = employeeBonus(employeeSalary);

    printf("%i\n", salaryBonus);

}

int employeeBonus(int salary){
    bool bonus;

    if (salary >= 30000){
        bonus = true;
    }
    else {
        bonus = false;
    }
    if (bonus == true){
        salary = salary * 10;
    }
    return salary;
}