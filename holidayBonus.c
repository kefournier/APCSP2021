#include <stdio.h>
#include <cs50.h>
//function declaration so your compiler knows to look for a function
int totalSalary(int salary);

int main(void){

    //getting userInput
    int userSalary = get_int("What is the employee's salary? ");
    
    //creating a new variable to hold value of function call
    int ourUserCompensation = totalSalary(userSalary);

    //printing out the new value
    printf("%i\n", ourUserCompensation);

}

//function definition
int totalSalary(int salary){
    
    bool bonus;

    if (salary > 30000){
        bonus = true;
    }
    else {
        bonus = false;
    }
    if (bonus == true){
        //updating salary when bonus is true (salary > 30000)
        salary = salary * 10;
    }
    //need to return an integer variable since
    //function header indicates int
    return salary;
}