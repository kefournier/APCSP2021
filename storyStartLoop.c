#include <stdio.h>
#include <cs50.h>

void storyStart(); //function declaration, before you can use the function, you need to declare it

int main(void){

storyStart(); //calling my function here
char character = get_char("Type 'N' for Nell, or type 'A' for Arlo: ");

/*creating a string to hold a name,
dependent on character user gives.
That way I can print the full name
later in the program*/

string name;

    //if the user provides 'N' at the prompt
    //updating the string variable to hold "Nell"
    if (character == 'N'){
        name = "Nell";
        printf("Hello, Nell! You are a beautiful Tuxedo cat. ");
    }

    //if the user provides 'A' at the prompt
    //updating the string variable to hold "Arlo"
    if (character == 'A'){
        name = "Arlo";
        printf("Hello, Arlo! You are a cute, little gray kitty. ");
    }

    char window = get_char("Do you like to sit in the window? ");

    if (window == 'Y'){
        printf("There are some mysterious happenings in the ");
        printf("neighborhood today, make sure you take notice!\n");
    }

    if (window == 'N'){
        printf("You are kind of a dull kitty. Goodbye, %s.\n", name);
        //return 0 ends a C program
        return 0;
    }

    char stranger;

    //this is a do while loop that lets me repeat
    //my question until I get the answer I want
    do{
        stranger = get_char("Do you see the stranger looking in the windows of your next door neighboor's house? ");

            //embedded if statement in the loop to
            //print a message that will help guide
            //the user's response the next time the
            //loop runs
            if (stranger == 'N' || stranger == 'n'){
            printf("Get with the program! You need to be more observant %s!\n", name);
            }
        }
    while (stranger == 'N' || stranger == 'n');


}

//my function definition
void storyStart(){
    printf("Welcome to my story! Today I am going to take you\n ");
    printf("on an adventure! My first question is who you would\n ");
    printf("like to be in this story? You have two options: you can\n ");
    printf("be a character named Nell, or a character named Arlo.\n ");
    }