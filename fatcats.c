#include <stdio.h>
#include <cs50.h>

int holidayBonus(int salary, bool bonus);

int main(void){

    int userSalary = get_int("What is your salary?");

    //call function here

}

int holidayBonus(int salary, bool bonus){

    int totalSalary = 0;
    if (salary > 30000){
        bonus = true;
    }
    else {
        bonus = false;
    }

    if (bonus == true){
        totalSalary = salary * 10;

    }
    return totalSalary;
}