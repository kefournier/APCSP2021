#include <stdio.h>
#include <cs50.h>

void storyStart();

int main(void){

    storyStart();

}

void storyStart(){
    printf("Welcome to Titanic 2. We have set sail exactly 110 years after the original Titanic, and we'll travel along the exact same route.\n");
    printf("This isn't going to be your Leonardo Dicaprio and Kate Winslet Titanic experience. But, there's just as much excitement\n");

    string name = get_string ("What is your name? ");

    printf("Great to meet you, %s! Would you like to explore the ship first? Or would you like to go to your first-class cabin?\n", name);

    char choice = get_char ("Type A to explore. Type B to go to your cabin:\n");

    if (choice == 'A')
    {
        printf("Would you like to go explore the first-class deck or the dining hall for high tea?\n");
            char choice2 = get_char ("Type A to go to the deck. Type B for the dining hall:\n");
            if (choice2 =='A')
            {
                printf("Welcome to the deck! It looks like you're not the only one here. There is a bar to your right");
                printf("As you walk over to the front of the deck, looking out onto the ocean, someone approaches you and");
                printf("introduces herself to you as Mary-Kate Gilebsky.\n");
                printf("(Mary-Kate plays an important role for later in the story, so pay attention to what she tells you)\n");

                printf("You introduce yourself back as %s\n", name);

                printf("Mary-Kate has lost her sister somewhere along the ship. She has been looking all morning\n");
                printf("She's asking for your help in finding her. To help you out, she has given a detailed description of her\n");
                printf("She's 12 years old and was last seen wearing a white, sunflower dress, with navy blue stripes and a yellow ribbion in her");
                printf("long, chestnut brown hair that's tied into a ponytail. She was last seen at the pool\n");

            }

            else
            {
                printf("Welcome to the Dining Hall!\n");
                printf("There seems to be someone who is eager to introduce themselves. Her name is Mary-Kate Gilebsky\n");
                printf("Unfortunately, before you can fully submerge in conversation, her attention is taken away by  a crew member");
                printf("calling her over to tell her they found her sister last at the ballroom, and with that, Mary-Kate speeds away.\n");
                printf("However, you're curious in what is happening right before you, so you follow Mary-Kate who is already way ahead\n");
                printf("As you run after Mary-Kate, quickly glancing over into rooms as you pass by, you run into a young man\n");
                printf("Should you get back up and continue running after Mary-Kate, or should you first apologize to the young man?\n");

                char choice5 = get_char("Type A to get back up and continue on. Type B to apologize\n");
                if (choice5 == 'B')
                {
                  printf("You help the young man up before apologizing to him. He asks you why you felt the need to run\n");
                  printf("When you explain that you're trying to help find a missing girl, he offers his own help after introducing himself\n");
                  printf("His name is Jesse Sullivan. You introduce yourself back as %s", name);

                char choice6 = get_char ("Type A to accept his offer. Type B to decline\n");
                    if (choice6 == 'A')
                    {
                        printf("You both follow after Mary-Kate only to have lost her tracks. From there, you stumble into the dining hall");
                        printf("where Jesse spots a young girl eating sticky toffee pudding by herself\n");
                        printf("You both share glances before calmly approaching her.\n");
                        printf("As you get closer, the young girl notices you and Jesse's presence. As she stops eating");
                        printf(", she begins to quickly get up to leave, but you both assure her that you just want to make sure she's safe\n");
                        printf("Should you and Jesse take her to a crew member or do you want to sit down and know why she's by herself?\n");
                    char choice7 = get_char ("Type A to take her to a crew memebr. Type B to know why she's all alone\n");
                        if (choice7 == 'A')
                        {
                            printf("You took her to the nearest crew member. They  returned her to her sister, Mary-Kate Gilebsky");
                            printf("Thanks for helping to find the missing girl, and I hope you enjoy your stay on Titanic 2");
                           //return 0;
                        }
                        else
                        {
                            printf("You both calmly ask her to sit down and explain to you both why she's all alone. You explain");
                            printf(" that you both have been helping her sister look for her. The little girl explains that");
                            printf(" she didn't mean to cause a huge ruckus. She was actually trying to find her sister.\n");
                        }
                    }
                    else
                    {
                        printf("As you run back in the direction that you last saw Mary-Kate run in, you realize that Jesse begins to");
                        printf("run after you. To get him to leave you alone, you quickly change directions and head towards the cabins\n");
                    }
                }
                else
                {
                    printf("You get back up and catch up with Mary-Kate and the crew member. You all come to a halt at the ballroom");
                    printf("where you find some people dancing and celebrating the ships successful launch\n");
                    printf("Once you all catch your breath, you fully introduce yourself to Mary-Kate and the crew memebr");
                    printf("who then fill you in on what they're doing. They're trying to find Mary-Kate's 12 year olds sister\n");
                    printf("She was wearing a sunflower dress with navy-blue stripes and a yellow ribbon in her hair\n");
                    printf("She was last seen in this room. Come to find after scanning the room while trying not to disturb the party,");
                    printf("you find a yellow ribbon on the floor in the corner of the ballroom.");
                    char choice8 = get_char("Type A to pick it up. Type B to leave it alone");

                }
            }
    }
    else
    {
        printf("Welcome to your room! Since this is a first-class cabin, you have a sitting room, your bedroom, an ensuite");
        printf(", and you have your luggage that was taken up here for you. Let's go explore the rest of your accomodations on the ship\n");
        printf("You also have four lifevests just in case and an emergency supplies kit including string, bandaging, a flashlight");
        printf(" along with duct tape, batteries, and pliers\n");
        char choice3 = get_char ("Type A to go to the dining hall. Type B for the ballroom to chit chat with fellow travelers\n");
            if (choice3 == 'A'){
                printf("Welcome to the dining hall! It seems like there is lunch occuring. Lets grab a bite to eat\n");
                printf("Today, on the menu, there is lobster bisque with sticky toffee pudding for after the meal\n");
                printf("There are some people over at a large table who seem to be inviting you over to their table. Lets go eat with them\n");
                printf("Over at the table, one of the young men who goes by the name of Jesse is talking about a missing young girl!\n");
                printf("Apparently, she was last seen at the pool and is only 12 years old\n");
            }
            else
            {
            printf("There seems to be a small party in the ballroom");
            printf(",but before you have the chance to fully look around,");
            printf(", someone pulls you onto the dance floor and leads you through a dance.\n");
            printf("You managed to break free from his grip only to stumble into a young tween in a sunflower dress.\n");
            printf("Before you can ask if she's alright, she runs out of the room and onto the deck. She left behind a yellow ribbon.\n");
            }

    }

}