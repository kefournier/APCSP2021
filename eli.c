#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("The Matrix\n"); //it's computer science, it's only appropriate I choose a movie about a computer simulation!
    printf("You wake up for work one morning, but you're not in your room.\n A man is sitting there and starts talking to you.\n 'This blue pill will make you wake up back into your room, and you can forget all of this.\n However, this red pill will reveal the truth of this world.' \n");
    char p = get_char("Do you take the blue (b) or the red (r) pill? ");
        if(p == 'b' || p == 'B')
        {
            printf("Really? Okay. You wake up back in your room and go to work.\n");
            return 0;
        }
        if(p == 'r' || p == 'R')
        {
            printf("You wake up in a new room, but this one feels more real.\n \n");
            printf(" The man explains to you that the reality you have been living in was a lie, gesturing towards hundreds of computer monitors that show the world you on-ce lived in.\n");
            printf("'You can stop this', the man says to you, 'choose a skill to learn and free humanity'.\n");
            char s = get_char("You see three skill choices: speech skills (S), karate (K), and hacking (H).\n Which do you take? All 3 (T) is an option! ");

            if(s == 's' || s == 'S')
            {
                printf("\nYou learn incredible speech skills, and go back into the simulation. \n");
                printf("The man tells you that a man in a black suit controls the simulation. \n");
            }
                    /*
                    char c = get_char("Do you tell him to stop (S) or ask to join him (J)? ");
                    if(c == 's' || c == 'S')
                    {
                        printf("\nYou ask him to stop the simulation. \n 'Okay', he says smugly. The entire simulation goes black, since he LITERALLY shut off the entire simulation. \n");
                        return 0;
                    }

                    if(c == 'j' || c == 'J')
                    {
                    printf("\nYou ask to join him. That is not good for everybody but you, but he lets you rule over everybody with him!\n");
                    return 0;
                    }
                    */

            if (s == 'k' || s == 'K')
            {
                printf("\nYou learn every karate move perfectly and hop back in to the simulation. \n");
                printf("The man tells you that a man in front of you controls the simulation.\n You start to fight him, and actually catch him by suprise!\n You and everybody around you wake up from the simulation.\n You freed everyone, good job!");
                return 0;
            }

            }

       // }

}
