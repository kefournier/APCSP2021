#include <stdio.h>
#include <cs50.h>

int totalSalary(int salary);

int main(void){

    int employeeSalary = get_int("What is the employee's salary? ");

    int updatedSalary = totalSalary(employeeSalary);

    printf("%i\n", updatedSalary);

}

int totalSalary(int salary){

    bool bonus;

    if(salary >= 30000){
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