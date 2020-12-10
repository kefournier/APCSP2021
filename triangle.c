#include <cs50.h>
#include <stdio.h>
#include <math.h>

//declaring the function
int tri(int a, int b, int c);

int main(void)
{
    int x = get_int("Side length number 1: ");
    int y = get_int("Side length number 2: ");
    int z = get_int("Side length number 3: ");

    //calling or using the function
    //passing in actual parameters of x, y, and z
    tri(x,y,z);
}

//function definition with formal parameters
int tri(int a, int b, int c){
    if ((a > b + c) || (b > a + c) || (c > a + b))
    {
        printf("false\n");
    }
    else
    {
        printf("true\n");
    }
    //return 0 is a way to end your program/function
    return 0;
}