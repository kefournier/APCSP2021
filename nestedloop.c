#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int n = get_int("Enter the value of n: ");

   for(int i = 1;i <= n;i ++)  // outer loop
   {
       for(int j = 1;j <= 5; j++)  // inner loop
       {
           printf("%i ",(i * j)); // printing the value.
       }
       printf("\n");
   }
}