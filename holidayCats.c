#include <stdio.h>
#include <cs50.h>

//function declaration so my compiler knows to look for a function
int totalSalary(int salary);

int main(void){
    int yourSalary = get_int("What is the employee's salary? ");

    //creating a variable to hold value of function call
    //yourSalary is the actual parameter I am passing in
    int employeeSalary = totalSalary(yourSalary);

    //printing the value of employeeSalary
    printf("%i\n", employeeSalary);

}

int totalSalary(int salary){

    bool bonus;

    if (salary > 30000){
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