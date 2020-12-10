#include <stdio.h>
#include <cs50.h>

//this is where I am declaring all of my functions
int countFactors(int n);
void printFactors(int n);
bool isPrime(int myNum);
int countPrimes(int n);

int main(void){

    int testNumber = get_int("What is your number? ");

    //calling the printFactors function
    //with my user input of testNumber as the parameter
    printFactors(testNumber);

    //embedding a call to my countFactors function
    //within a print statement. Using my user input
    //of testNumber as the parameter
    printf("The count of factors is: %i\n", countFactors(testNumber));

    //if the return value of my isPrime function
    //with my userInput as the parameter, evaluates
    //to true, then the number is a prime
    if (isPrime(testNumber) == true){
        printf("The number is a prime!\n");
    }
    else{
        printf("The number is not a prime.\n");
    }
    //calling my countPrimes function in a print statement
    //using my user input of testNumber as the parameter
    printf("There are %i primes between 2 and %i.\n", countPrimes(testNumber), testNumber);


}

//these are all my function definitions!

//my function to count a number's factors
int countFactors(int n){
    int count = 0;

    for(int i = 1; i <= n; i++){
        if (n % i == 0){
            count++;
        }
    }
    return count;
}

//my function to print the actual factors
//of a number
void printFactors(int n){
    for(int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%i\n", i);
        }
    }
}

//my function to determine if a number
//is prime, note: I am calling the
//countFactors function within this one
//to help me with this
bool isPrime(int myNum){
    if(countFactors(myNum) > 2){
        return false;
    }
    else {
        return true;
    }
}

//my function to count the number of
//prime numbers between 2 and a user number n
int countPrimes(int n){
    int count = 0;
    for (int i = 2; i <= n; i++){
        if(countFactors(i) == 2){
            count++;
        }
    }
    return count;
}



