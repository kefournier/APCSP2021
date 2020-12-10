#include <stdio.h>
#include <cs50.h>

int main(void){
    //prompt user for answer
    char c = get_char("Answer: ");

    //check answer
    switch(c)
    {
        //looking for either case y
        case 'Y':
        case 'y':
            printf("yes\n");
            break;
        //looking for either case n
        case 'N':
        case 'n':
            printf("no\n");
            break;
    }
}