#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

void playInBriefingRoom();
void playInTeamRoom();
void gameover();

int main(void)
{

    printf("You are in your barracks. You can go either to the briefing room or the team room to chat with you colleagues.\n");


    while(true)
    {
        char location = get_char("Where do you want to go? press B to go to the briefing room or press T to go to the team room. Type any other key to exit\n");

        if (location == 'b' || location == 'B')
        {
            playInBriefingRoom();
        }
        else if (location == 't' || location == 'T')
        {
            playInTeamRoom();

        }
        else
        {
            printf("You choose to exit the game. Thanks for trying.\n");
            break;
        }
    }
}

void playInBriefingRoom()
{
    printf("You enter the briefing room. The chatter in the room quietens down as you enter. There is a chair at the table.\n");
    char decision = get_char("Would you like to sit down (press any key for yes)");
    printf("You sit down. Your commander gets up and walks towards the screen up front. On the screen are diagrams of a compound and a few pictures of men with beards.\n");
    char look = get_char("Your commander clears his throat. The rooms suddenly falls silent. There is an atmosphere of excitement and anxiety.(Press any key to look at the screen)\n");
    printf("'We all have gathered here today in response to the capture of an American journalist Jack Connor by Taliban militants.'(pointing at the screen to a picture of a man in his forties with glasses.\n");
    printf("'He was captured near the Helmland Province in Afghanistan. Your mission is to bring him back alive. You'll have aerial support, but comms will be off every 5 minute intervals with base.\n");
    printf("'Any questions?'\n");

    while(true)
    {
        int question = get_int("Ask questions by typing out either 1,2 or 3. Type any other number to stop asking questions.\n");
        if(question == 1)
        {
            printf("What are the rules of engagement?\n");
            printf("Your commander replies, 'Weapons free anytime. It's a time sensitive mission.\n");
            printf("Any more questions?\n");
        }
        else if(question == 2)
        {
            printf("How much time have got?\n");
            printf("Your coomander replies,'The mission is time sensitive. You will have 30 minutes to get to the compound, the mission after than must last no longer than 45 minutes, as Mr.Connor will be executed after that on live TV.'\n");
            printf("Any further questions?\n");
        }
        else if(question == 3)
        {
            printf("How accurate is our intel?");
            printf("Your commander replies, 'Our intel is reliable, but we have to consider faulty intel too. Keep that in mind and plan accordingly.");
            printf("He looks at all of you. He has an ice cold gaze, something he got from having seen the horrors of war in his days as an assaulter in his squadron.\n");
            printf("'Now go and discuss insertion and extraction. This mission is time sensitive, so you will not be able to practice this at the kill house.'");
            printf("Any more questions?\n");
        }
        else
        {
            break;
        }
    }

    char action1 = get_char("Press U to get up or D to keep on sitting.\n");
    if(action1 == 'U' || action1 == 'u')
    {
        printf("You get up and walk with your team towards the team room.");
    }
    else if(action1 == 'D' || action1 == 'd')
    {
        printf("As you sit there pondering, the commander walks up to you.\n");
        char stand = get_char("Press S to stand up in respect.");
        printf("You will be on your first time sensitive mission, right?\n");
        printf("Yes sir.\n");
        printf("I see... your team trusts you and you must trust them. Use your knowledge to guide you and come back home successful as a team\n");
        printf("Hooyah sir\n");
        char exit = get_char("Press E to leave the room.\n");
        printf("You leave the room.\n");
    }
    printf("You walk into the team room, where everone is hunched over a map of the compound.\n");
    printf("Your Masterchief is a man of experience. He is one of those freaks who runs a 5 minute mile pace and beats the entire team in every workout. His stare can be so mean that legend says that his fierce look during an interrogation once made a taliban insurgent might piss himself a bit.\n");
    printf("So..(looking at you)... Riley, how do you think we should insert ourselves?\n");
    char speech = get_char("Type Y to speak or N to keep your silence.\n");
    if(speech == 'Y' || speech == 'y')
    {
        printf("I think we should HALO (High altitude Low opening) jump out of the plane and land 5 clicks of the compound and hike there.\n");

    }
    if(speech == 'N' || speech == 'n')
    {
        printf("I didn't expect this from you Riley. Okay... I'll ask a simpler question...since you are a breacher, what breaching device must we use?\n");
        char speech2 = get_char("Press Y to reply.\n");
        printf("I think we should use standard satchel charges. It will have enough semtex (general plastic explosive) to knock out the toughest door.\n");
    }
    printf("Good. As of teams, we will have two teams coming in from the west and east of the compound. We need Clay (your team sniper) to take up overwatch over a nearby elevated surface. You guys know the drill. Let's do this.\n");

    char leave2 = get_char("Type L to leave the table and go to your locker.");
    if(leave2 == 'L' || leave2 == 'l')
    {
        printf("You leave the table and go to your locker. The shelf is mostly empty because your team specialists came and packed everthing and loaded it on the plane.\n");
        printf("Whats left are pictures of your family on the wall.");

        for(int use = 0; use<=4; use++)
        {
            int interact = get_int("Press either 1,2 or 3 to look at the pictures individually or press 4 to pick up the phone on the shelf and call your wife.\n");
            if(interact == 1)
            {
                printf("You look at the picture of your 3 year old son. You sigh...hoping that you will get to meet him soon. There were a lot of things you wanted him to learn\n");
            }
            if(interact == 2)
            {
                printf("You look at the picture of your wife. Ever since you had been in the teams, she had been singlehandedly taking care of the house and the kid. You wish you could help her more but work is always on your mind.\n");
            }
            if(interact == 3)
            {
                printf("You look at the picture of you best buddy Tom, who was killed while you guys were on deployment. The thought of seeing you friend die can be quite a shock. You try not to remember that horrific incident, and instead you sliently vow to wipe out every terrorist scum off the face of this earth to avenge Tom's death.\n");
            }
            if(interact == 4)
            {
                printf("You pick up the phone and dial in your wife's number.\n");
                printf("The call doesn't go through and goes on voicemail.\n");
                printf("'Hey honey, I will be leaving for Afghanistan in a few hours, and I won't be able to call you back till I reach my base. Talk to you then. Love you, bye.'\n");
            }
        }
        get_char("Press any key to exit the team room and head to the plane.\n");
        printf("You take one last look at your locker to make sure they took everyting. You close the locker door and leave the room.\n");
    }
    char achievement = get_char("You've unlocked your first abchievement! Press A to receive and inspect it.\n");
    if(achievement == 'A')
    {
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("                   ____|A       _______/|                                       \n");
        printf("                  /@@@@@@|_    /@@@@@@@@|                                      \n");
        printf("                  VZZZ@@@@A   |ZZZZZZ@@@A                                      \n");
        printf("                      |/VV@A  |/    |@@@@|                                     \n");
        printf("                         VV@A______/@@@@@A                                     \n");
        printf("                          VV@@@@@@@@@@@@@@|      /@    /@|                     \n");
        printf("                           VV@@@@@@@@@@@@@|     /@@   /@@|   /@|               \n");
        printf("                            |@@@@@@@@@@@@@|    /@@@  /@@@|  /@@|               \n");
        printf("                  __________|@@@@@@@@@@@@@|    H|    /@/    V@@|               \n");
        printf("                  VZZZZZZZZZZ@@@@@@@@@@@@@|    H|   /@/     /@/                \n");
        printf("                   VZZZZZZZZ/V@@@@@@@@@@@@|    H|_ /@/_____/@/                 \n");
        printf("                             _V @@@@@@@@@@A    V@@@/@@@@@@@@/                  \n");
        printf("                            /@@@@@@@@@@@@@@|   _/@@@/                          \n");
        printf("                           /@@@@@/ |@@@@@@@|__/@@@/                            \n");
        printf("                          |@@@@@/  |@@@@@@@|@@@@/                              \n");
        printf("                          |@@@@|   |@@@@@@@|____                               \n");
        printf("                          |@@@@|    V@@@@@@@@@@@A                              \n");
        printf("                           V@@@|     |@@@@@@@@@@@@|                            \n");
        printf("                            V@@|      V@@@@@@@@@@@|                            \n");
        printf("                         ___/@@A       V@@@@@@@@@@@A                           \n");
        printf("                     ___/@@@@@@@|           V@@@@@@@|                          \n");
        printf("                    /@@@@@@@@@@/         __/@@@@@@@/                           \n");
        printf("                                        /@@@@@@@@|                             \n");
        printf("                                                                               \n");
        printf("\n");
        printf("  @@@@@ @  @ @@@@    @@@  @@  @ @    @ @    @@@@   @.    @@@@@ @ @   @@@    @   @ @        \n");
        printf("    @   @@@@ @@     @   @ @@@@@ @     @     @@    @@@    @@     @    @  @  @@@   @         \n");
        printf("    @   @  @ @@@@    @@@  @  @@ @@@@  @     @@@@ @   @ @@@@@    @    @@@  @   @  @         \n");
        printf("                                                                                           \n");
        printf("     @     @  @     @@@@@      @ @ @@@@   @@@@@ @@@@@ @@@@ @@@@  @@@    @   @ @            \n");
        printf("      @ @ @  @@@    @@          @  @@     @@      @   @@   @@@@  @  @  @@@   @             \n");
        printf("       @ @  @   @ @@@@@         @  @@@@ @@@@@     @   @@@@ @ @   @@@  @   @  @             \n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
    }


    get_char("Type any key to continue with the story.\n");
    printf("You walk towards the tarmac, where your plane is standing. Your teams' stuff is being loaded in large containers on board.\n");
    printf("You enter the plane, where your teammates are sitting.\n");
    printf("After a few minutes, the plane hatch closes and your plane lines up on the runway. The powerful thrust of the engines propells the plane through and up into the sky\n");
    char action3 = get_char("Press S to get some sleep or T to talk to your teammates.\n");
    if(action3 == 'S')
    {
        printf("You see your hammock already setup nearby. You put on your eye patch and doze off...\n");
    }
    if(action3 == 'T')
    {
        printf("You don't feel like sleeping and would like to chat with your teammates instead.... so you walk up to your them.\n");

        for(int dialoguesAsked = 0; dialoguesAsked <= 4; dialoguesAsked++)
        {

            int speak = get_int("Type 1 to speak to Kyle, your medic.... 2 to speak to Clay, your team sniper.... 3 to speak to Jason, your masterchief.... or 4 to speak to Doug, the K-9 handler. Press any other number to skip.\n");

            if(speak == 1)
            {
                printf("You walk up to Kyle, your team medic. He is a short guy, about 5'7'', but don't let his height fool you.\n");
                printf("He's known to have once saved a guy in death's grasp. They called him the Holy Grail in the team. If he looked after your wounds in combat, you WILL live.\n");
                get_char("Press any key to speak.\n");

                printf("Hey Kyle, how's it going?\n");
                printf("'Hey Riley... it's been going well... just thinking about the mission.'\n");

                get_char("Press any key to speak.\n");
                printf("Yea... this one's gonna be a tough and fast one. They said that the intel was solid, but I think that we have to stay alert.\n");
                printf("'Absolutely... I get really mad when our intel is all messed up. It usually doesn't end well.'\n");

                get_char("Press any key to speak.\n");
                printf("Me too. Anyways, i'll talk to you later, gotta catch up on the other gossip.\n");
                printf("'Aight man... try to get some rest too.'\n");
            }
            else if(speak == 2)
            {
                printf("You walk up to Clay, your team sniper. He is insanely built, but is as calm as a cucumber.\n");
                printf("Legend has it that he is so calm and skilled as a sniper that once on a deployment in Iraq a mortar had blown up next to him, temporarily deafening him and damaging his rifle scope.\n");
                printf("He still managed to take out seven insurgents 150 meters away just with the iron sights of his rifle. Those kills were important, because the team that was pinned down could now move and capture a high value terrorist.\n");
                printf("That got him the combat of valor medal.\n");

                get_char("Press any key to speak.\n");
                printf("Hey Kyle, how's it going man?\n");
                printf("'Great Riley. I've been thinking about submitting my application to become senior chief.'\n");
                get_char("Press any key to speak.\n");
                printf("That's great! Senior Chief Clay Spencer...\n");
                printf("'Yea... by the way, since it's your first time sensitive mission with us, you owe us a crate of beer when we're done. It's tradition.'\n");
                get_char("Press any key to speak.\n");
                printf("You guys are gonna drain all the money from my wallet. Anyways, talk to you later, and good luck later on for that promotion interview.\n");
                printf("'Thanks Riley, seeya around.'\n");

            }
            else if(speak == 3)
            {
                printf("You walk up to Jason, your team Marter chief. We spoke about him earlier.\n");
                get_char("Press any key to speak.\n");
                printf("Hey Jason, how's it going?");
                printf("Hey Riley, what can I do for you?\n");
                get_char("Press any key to speak.\n");
                printf("How do you manage to run sub 5 minute miles?\n");
                printf("'It's practice. Mind you, I got rolled back in BUD/s because I couldn't finish my 6 mile timed run.'\n");
                printf("'I then decided that it's either passing that run or being a loser on the regular fleet. You might've guessed what my decision was, so here I am.'\n");
                get_char("Press any key to speak.\n");
                printf(" (jokingly) That's pretty inspirational.\n");
                printf("'By the way, you owe all of us a crate full of beers, sincd it's yor first time sensitive mission.'\n");
                get_char("Press any key to speak.\n");
                printf("Wait, I thought Clay said....(sighing) alright. Seeya around Jason.\n");
            }
            else if(speak == 4)
            {
              printf("You walk up to Doug, the K-9 handler and his dog, a tough Belgian Malinois.\n");
              get_char("Press any key to speak.\n");
              printf("Hey Doug. How's Cerberus (referring to the dog)?\n");
              printf("'Yea he's in great shape. Had been training him quite rigorously now.'\n");
              get_char("Press any key to speak.\n");
              printf("I see. (you bend down and pet Cerberus, who in turn licks your hand).\n");
              get_char("Press any key to speak.\n");
              printf("'How long have you two been together?\n");
              printf("'For about 5 years now. He's the best bomb detector ever, because of that incredible nose of his.'\n");
              printf("'Also, before I forget, as the part of the tradition, you laso have to buy an entire bag of dog food for Cerberus.'\n");
              get_char("Press any key to speak.\n");
              printf("I'm gonna have to ask the command to rive me a raise now, thanks to you guys. Seeya around Doug.\n");

            }
            else
            {
                printf("You suddenly feel tired from all the talking, and decide to take a nap.\n");
            char sleep = get_char("Pres any key to sleep.\n");
            printf("You slide into your hammock, put on your eye patch and doze off...\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            }
        }
    }
    printf("The sound of your alarm wakes you up.\n");
    get_char("Press any key to get out of the hammock.\n");
    printf("\n");
    printf("You get out of the hammock. You see your teammates putting on their gear, getting ready for the mission.\n");
    get_char("Press any key to access your gear.\n");
    printf("\n");
    printf("Your inventory is as follows:\n");
    printf("Helmet with night vision goggles.\n");
    printf("Vest with 12 magazines for your rifle and 4 magazines for your pistol.\n");
    printf("Belt with a medical pouch, holster and a knife.\n");
    printf("A few chemlights, a pair of scissors, and a compass and map.\n");
    printf("Your multipurpose tomahawk\n");
    printf("Your breaching statchel, C-4 and blast charge.\n");
    printf("A thermnite charge, pliers and a breacher shotgun.\n");
    printf("3 flash grenades, 2 smoke grenades and 4 regular hand grenades.\n");
    printf("Your primary assualt rifle, the HK416 with a suppressor.\n");
    printf("Your pistol, a Glock 19 gen 4.\n");
    printf("A bundled up American flag.\n");
    char wear = get_char("Press W to gear up.\n");
    if(wear == 'W')
    {
        printf("You strap on your helmet and test the batteries of you night vision goggles (NVGs).\n");
        printf("You put on you rvest and check if all the magazines are loaded.\n");
        printf("You put on your belt and attatch your grenades. You place your pistol in the holster.\n");
        printf("Put your rifle sling over your shoulder.\n");
        printf("Finally, you wear your parachute rig, strapping everthing till it's tight enough.\n");
        printf("Lastly, you put on your oxygen m,ask and wait for further instructions\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("OPERATION ZUES\n");
    printf("TIME: 0100 hours\n");
    printf("LOCATION: Helmland Province, Afghanistan, Asia.\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    get_char("Press any key to continue.\n");
    printf("\n");
    printf("You and Clay pair up as buddies and check for any faults in each other's parachute's. Turns out the rigger did an exceptional job and everthing looks good.\n");
    get_char("Press any key to continue.\n");
    printf("\n");
    printf("All of you line up behind each other.\n");
    printf("The hatch of the plane opens up. You can see the silhouette of the mountains below the dark sky.\n");
    get_char("Press any key to continue.\n");
    printf("\n");
    printf("'10 seconds....' you hear on the PA.\n");
    printf("The red light next to the hatch turns green. One by one, everyone start jumping out.\n");
    get_char("Press any key to exit the plane.\n");
    printf("\n");
    printf("You walk up to the end of the hatch and jump. The adrenaline rush is minimal, because you've done this a few hundred times in airborne school to just pass.\n");
    get_char("Press any key to continue.\n");
    printf("\n");
    printf("Out through your NVGs, you can see the infrared strobes on each of your teammates' helmet, so your guys can stick together.\n");
    get_char("Press any key to continue.\n");
    printf("\n");
    printf("All of you plummet thousands of feet down towards the ground.\n");
    get_char("Press any key to continue.\n");
    printf("\n");
    printf("You look at your altimeter. (open the chute at about 100 feet from the ground.\n");
    get_char("Press any key to continue.\n");
    printf("\n");
    printf("40 thousand feet.\n");
    printf(".\n");
    printf(".\n");
    printf(".\n");
    printf(".\n");
    printf("20 thousand feet.\n");
    printf(".\n");
    printf(".\n");
    printf(".\n");
    printf("10 thousand feet.\n");
    printf(".\n");
    printf(".\n");
    printf("8 thousand feet.\n");
    printf(".\n");
    printf(".\n");
    printf("6 thousand feet.\n");
    printf(".\n");
    printf(".\n");
    printf("4 thousand feet.\n");
    printf(".\n");
    printf(".\n");
    printf("2 thousand feet.\n");
    printf(".\n");
    printf("1 thousand feet.\n");
    get_char("Press any key to deploy your chute.\n");
    printf("\n");
    printf("You tug on the deploy chord. Your chute shoots out of the bag, jerking your entire body up a bit.\n");
    get_char("Press any key to look down.\n");
    printf("\n");
    printf("You see a clearing of tall grass covering it.\n");
    printf("You and your team softly land down and quickly pack your chutes.\n");
    get_char("Press any key to continue.\n");
    printf("\n");
    printf("'Split up into team A and B like we had discussed.', says Jason.\n");
    char choice = get_char("You were given a choice on the plane on which team you would like be on. Type A you had chosen to go with Team A or type B if you had chosen to go with Team B.\n");
    if(choice == 'A')
    {
        printf("You go with Team A.\n");
        get_char("Press any key to continue.\n");
        printf("\n");
        printf("Your team moves past the tall grass and reaches a bridge. You see two robed males with guns patrolling the across the bridge.\n");
        printf("'Riley, take one tango and I'll take the other.', says Clay.\n");
        get_char("Press any key to take the shot.\n");
        printf("\n");
        printf("You aim down your holographic sight and shoot one of the insurgents in the head, followed by a shot from Clay to the head of the other insurgent.\n");
        printf("\n");
        printf("Terrorists don't fly off the ground the way they show in movies. They just collapse in their place.\n");
        get_char("Press any key to move on.\n");
        printf("\n");
        printf("Your team crosses the bridge, advancing towards the compound in the village.\n");
        get_char("Press any key to move on.\n");
        printf("\n");
        printf("Your team moves silently through the streets, scanning windows with the invisible infrared lasers only you can see under your NVGs.\n");
        get_char("Press any key to move on.\n");
        printf("\n");
        printf("Your team reaches the compound on the south side. As you cross, you see Team A positioned at the north end near a gate.\n");
        get_char("Press any key to move on.\n");
        printf("\n");
        printf("Your team reaches the south side of the compound, at a locked metal door.\n");
        char breach = get_char("Press T to use a thermite charge to melt the lock or press P to use pliers to break the lock.\n");
        if(breach == 'T')
        {
            printf("You take out your thermite chrage and attatch it to the lock.\n");
            get_char("Press any key to wait.\n");
            printf("\n");
            printf("You wait for the other team to give a radio signal.\n");
            get_char("Press any key to wait.\n");
            printf("\n");
            printf("On your radio through your headphone, you hear Jason saying 'Breaches set, on my count. Standby.'\n");
            printf("You keep your finger poised on the trigger button.\n");
            printf("\n");
            printf("three...\n");
            printf("two...\n");
            printf("one...\n");
            printf("Breach. Breach. Breach.\n");
            get_char("Press any key to press detonate the thermite charge.\n");
            printf("\n");
            printf("You press the trigger and watch as the thermite chrage sizzles and glows red hot, melting the lock.\n");
            printf("You push open the door, let your teammates through, and retake your position as pointman.\n");
            printf("\n");
            printf("Your team is now in the compound.\n");
        }
        if(breach == 'P')
        {
            printf("You take out your pliers and hold it next to the lock.\n");
            printf("You wait for the other team to give a radio signal.\n");
            get_char("Press any key to wait.\n");
            printf("\n");
            printf("On your radio through your headphone, you hear Jason saying 'Breaches set, on my count. Standby.'\n");
            printf("You keep your finger poised on the trigger button.\n");
            printf("\n");
            printf("three...\n");
            printf("two...\n");
            printf("one...\n");
            printf("Breach. Breach. Breach.\n");
            get_char("Press any key to squeeze the pliers and break the lock.\n");
            printf("\n");
            printf("The force made by squeezing the pliers together breaks the lock.\n");
            printf("You push open the door, let your teammates through, and retake your position as pointman.\n");
            printf("\n");
            printf("Your team is now in the compound.\n");
        }
        get_char("Press any key to continue.\n");
        printf("\n");
        printf("Your team takes the second floor, while Team B takes the first floor.\n");
        get_char("Press any key to continue.\n");
        printf("\n");
        printf("There are four rooms on the second floor.\n");
        int room = get_int("Press 1 to clear the two rooms on the right or press 2 to clear the two rooms on the left.\n");
        if(room == 1)
        {
            printf("You and Doug take on the two rooms to the right.\n");
            get_char("Press any key to continue.\n");
            printf("\n");
            printf("You see two insurgents alseep on the beds.\n");
            get_char("Press any key to fire.\n");
            printf("\n");
            printf("You shoot both the insurgents dead in thier sleep.\n");
            get_char("Press any key to continue sweeping the room.\n");
            printf("\n");
            printf("You cautiosly walk towards a bathroom.\n");
            printf("You enter the bathroom and an insurgent lunges at you from behind the door.\n");
            int fight = get_int("Press 1 to use your hands or press 2 to use your knife.");
            if(fight == 1)
            {
               printf("You punch the insurgent in the stomach, driving him into a nearby wall.\n");
               printf("You then tak ehold of his head and snap his neck.\n");
               printf("The man falls lifeless to the floor.\n");
               printf("'Clear!', you say.");
            }
            else if(fight == 2)
            {
               printf("You take out your knife drive it into th einsurgent's chest, right into his heart.\n");
               printf("The insurgent dies, but using a knife left a mess of some blood.\n");
            }
            printf("You head to the second room, where you see two insurgents playing cards at a table.\n");
            printf("Doug unleashes Cerberus one of them and takes the other one out.\n");
            printf("Suddenly, out of the corner of your eye, you see a terrorist come and piont his gun at you. You don't have time to react so you brace for cover.\n");
            printf("You expect to hear shots, but instead it's silent.\n");
            get_char("Press any key to get up.\n");
            printf("\n");
            printf("You get up see the terrorist dead, with a bullet in his head. You look around.\n");
            printf("'Your clear Riley', is what you hear on your comms. You look out and see Clay perched on top of a tower, with jis sniper that had just killed the guys who was gonna kill you.\n");
            printf("You give Clay a thumbs up.\n");
            get_char("Press any key to continue.\n");
            printf("\n");
            printf("You and Doug gather around the insurgent Cerberus had taken, and try to interrogate him.\n");
            printf("'(in pashto) Where is the American?'\n");
            printf("You scumbags will never find him.\n");
            printf("'Alright', says Doug and shoots the insurgent dead.\n");
            get_char("Press any key to continue.\n");
            printf("\n");
            printf("You join your teammates who had cleared the romms to the left and move up to the third floor, where the hostage is supposed to be.\n");
            printf("You merge with Team B and head upstairs.\n");

         }
         else if(room == 2)
         {
            printf("You and Doug take on the two rooms to the left.");
            get_char("Press any key to continue.\n");
            printf("\n");
            printf("You see two insurgents alseep on the beds.");
            get_char("Press any key to fire.\n");
            printf("\n");
            printf("You shoot both the insurgents dead in thier sleep.\n");
            get_char("Press any key to continue sweeping the room.\n");
            printf("\n");
            printf("You cautiosly walk towards a bathroom.\n");
            printf("You enter the adjacent room and an insurgent lunges at you from behind the door.\n");
            int fight = get_char("Press 1 to use your hands or press 2 to use your knife.");
            if(fight == 1)
            {
               printf("You punch the insurgent in the stomach, driving him into a nearby wall.\n");
               printf("You then tak ehold of his head and snap his neck.\n");
               printf("The man falls lifeless to the floor.\n");
               printf("'Clear!', you say.");
            }
            else if(fight == 2)
            {
               printf("You take out your knife drive it into the insurgent's chest, right into his heart.\n");
               printf("The insurgent dies, but using a knife left a mess of some blood.\n");
            }
            printf("You head to the second room, where you see two insurgents playing cards at a table.\n");
            printf("Doug unleashes Cerberus one of them and takes the other one out.\n");
            printf("Suddenly, out of the corner of your eye, you see a terrorist come and piont his gun at you. You don't have time to react so you brace for cover.\n");
            printf("You expect to hear shots, but instead it's silent.\n");
            get_char("Press any key to get up.\n");
            printf("\n");
            printf("You get up see the terrorist dead, with a bullet in his head. You look around, and see a hole through the wall.\n");
            printf("'Your clear Riley', is what you hear on your comms. You look out and see Clay perched on top of a tower, with his sniper that had just killed the guys who was gonna kill you.\n");
            printf("You give Clay a thumbs up.\n");
            get_char("Press any key to continue.\n");
            printf("\n");
            printf("You and Doug gather around the insurgent Cerberus had taken, and try to interrogate him.\n");
            printf("'(in pashto) Where is the American?'\n");
            printf("You scumbags will never find him.\n");
            printf("'Alright', says Doug and shoots the insurgent dead.\n");
            get_char("Press any key to continue.\n");
            printf("\n");
            printf("You join your teammates who had cleared the romms to the right and move up to the third floor, where the hostage is supposed to be.\n");
            printf("You merge with Team B and head upstairs.\n");
        }
        else if(choice == 'B')
        {
            printf("You go with Team B.\n");
            get_char("Press any key to continue.\n");
            printf("\n");
            printf("Your team moves past the tall grass and reaches the entrance of the village. You see two robed males with guns on top of two towers on either side of the entrance.\n");
            printf("'Riley, take one tango and I'll take the other.', says Jason.");
            get_char("Press any key to take the shot.\n");
            printf("\n");
            printf("You aim down your holographic sight and shoot one of the insurgents in the head, followed by a shot from Jason to the head of the other insurgent.\n");
            printf("\n");
            printf("Terrorists don't fly off the ground the way they show in movies. They just collapse in their place.\n");
            get_char("Press any key to move on.\n");
            printf("\n");
            printf("Your team enters the village, advancing towards the compound in the village.\n");
            get_char("Press any key to move on.\n");
            printf("\n");
            printf("Your team moves silently through the streets, scanning windows with the invisible infrared lasers only you can see under your NVGs.\n");
            get_char("Press any key to move on.\n");
            printf("\n");
            printf("Your team reaches the compound on the north side. As you cross, you see Team A positioned at the south end near a metal door.\n");
            get_char("Press any key to move on.\n");
            printf("\n");
            printf("Your team reaches the south side of the compound, at a locked metal gate.\n");
            char breach2 = get_char("Press T to use a thermite charge to melt the lock or press P to use pliers to break the lock.\n");
            if(breach2 == 'T')
            {
                printf("You take out your thermite chrage and attatch it to the lock.\n");
                get_char("Press any key to wait.\n");
                printf("\n");
                printf("You wait for the other team to give a radio signal.\n");
                get_char("Press any key to wait.\n");
                printf("\n");
                printf("On your radio through your headphone, you hear Jason saying 'Breaches set, on my count. Standby.'\n");
                printf("You keep your finger poised on the trigger button.\n");
                printf("\n");
                printf("three...\n");
                printf("two...\n");
                printf("one...\n");
                printf("Breach. Breach. Breach.\n");
                get_char("Press any key to press detonate the thermite charge.\n");
                printf("\n");
                printf("You press the trigger and watch as the thermite chrage sizzles and glows red hot, melting the lock.\n");
                printf("You push open the door, let your teammates through, and retake your position as pointman.\n");
                printf("\n");
                printf("Your team is now in the compound.\n");
            }
            else if(breach2 == 'P')
            {
                printf("You take out your pliers and hold it next to the lock.\n");
                printf("You wait for the other team to give a radio signal.\n");
                get_char("Press any key to wait.\n");
                printf("\n");
                printf("On your radio through your headphone, you hear Jason saying 'Breaches set, on my count. Standby.'\n");
                printf("You keep your finger poised on the trigger button.\n");
                printf("\n");
                printf("three...\n");
                printf("two...\n");
                printf("one...\n");
                printf("Breach. Breach. Breach.\n");
                get_char("Press any key to squeeze the pliers and break the lock.\n");
                printf("\n");
                printf("The force made by squeezing the pliers together breaks the lock.\n");
                printf("You push open the door, let your teammates through, and retake your position as pointman.\n");
                printf("\n");
                printf("Your team is now in the compound.\n");
            }
            get_char("Press any key to continue.\n");
            printf("\n");
            printf("Your team takes the first floor, while Team A takes the first floor.\n");
            get_char("Press any key to continue.\n");
            printf("\n");
            printf("There are four rooms on the second floor.\n");
            int room1 = get_int("Press 1 to clear the two rooms on the right or press 2 to clear the two rooms on the left.\n");
            if(room1 == 1)
            {
                printf("You and Jason take on the two rooms to the right.");
                get_char("Press any key to continue.\n");
                printf("\n");
                printf("You see two insurgents alseep on the beds.");
                get_char("Press any key to fire.\n");
                printf("\n");
                printf("You shoot both the insurgents dead in thier sleep.\n");
                get_char("Press any key to continue sweeping the room.\n");
                printf("\n");
                printf("You cautiosly walk towards a bathroom.\n");
                printf("You enter the bathroom and an insurgent lunges at you from behind the door.\n");
                int fight = get_int("Press 1 to use your hands or press 2 to use your knife.");
                if(fight == 1)
                {
                    printf("You punch the insurgent in the stomach, driving him into a nearby wall.\n");
                    printf("You then tplace his neck on the edge sink and push it down, snapping it.\n");
                    printf("The man falls lifeless to the floor.\n");
                    printf("'Clear!', you say.");
                }
                else if(fight == 2)
                {
                   printf("You take out your knife and slash at his throat.\n");
                   printf("The insurgent dies, but using a knife left a mess of some blood.\n");
                }
                printf("You head to the second room, where you see two insurgents chatting at a table.\n");
                printf("Jason take out one and shoots the other in the leg and puts his hand over his mouth to quieten him.\n");
                printf("Suddenly, out of the corner of your eye, you see a terrorist come and piont his gun at you. You don't have time to react so you brace for cover.\n");
                printf("You expect to hear shots, but instead it's silent.\n");
                get_char("Press any key to get up.\n");
                printf("\n");
                printf("You get up see the terrorist dead, with a bullet in his head. You look around.\n");
                printf("'Your clear Riley', is what you hear on your comms. You look out and see Clay perched on top of a tower, with his sniper that had just killed the guys who was gonna kill you.\n");
                printf("You give Clay a thumbs up.\n");
                get_char("Press any key to continue.\n");
                printf("\n");
                printf("You and Jason gather around the insurgent Cerberus had taken, and try to interrogate him.\n");
                printf("'(in pashto) Where is the American?'\n");
                printf("You scumbags will never find him.\n");
                printf("'Alright', says Jason and shoots the insurgent dead.\n");
                get_char("Press any key to continue.\n");
                printf("\n");
                printf("You join your teammates who had cleared the romms to the left and move up to the third floor, where the hostage is supposed to be.\n");
                printf("You merge with Team A and head upstairs.\n");
            }
            else if(room1 == 2)
            {
                printf("You and Jason take on the two rooms to the left.");
                get_char("Press any key to continue.\n");
                printf("\n");
                printf("You see two insurgents alseep on the beds.");
                get_char("Press any key to fire.\n");
                printf("\n");
                printf("You shoot both the insurgents dead in thier sleep.\n");
                get_char("Press any key to continue sweeping the room.\n");
                printf("\n");
                printf("You cautiosly walk towards a bathroom.\n");
                printf("You enter the adjacent room and an insurgent lunges at you from behind the door.\n");
                int fight = get_char("Press 1 to use your hands or press 2 to use your knife.");
                if(fight == 1)
                {
                   printf("You punch the insurgent in the stomach, driving him into a nearby wall.\n");
                   printf("You then take hold of his head and snap his neck.\n");
                   printf("The man falls lifeless to the floor.\n");
                   printf("'Clear!', you say.");
                }
                else if(fight == 2)
                {
                   printf("You take out your knife drive it into the insurgent's chest, right into his heart.\n");
                   printf("The insurgent dies, but using a knife left a mess of some blood.\n");
                }
                printf("You head to the second room, where you see two insurgents playing cards at a table.\n");
                printf("Jason take out one and shoots the other in the leg and puts his hand over his mouth to quieten him.\n");
                printf("Suddenly, out of the corner of your eye, you see a terrorist come and piont his gun at you. You don't have time to react so you brace for cover.\n");
                printf("You expect to hear shots, but instead it's silent.\n");
                get_char("Press any key to get up.\n");
                printf("\n");
                printf("You get up see the terrorist dead, with a bullet in his head. You look around, and see a hole through the wall.\n");
                printf("'Your clear Riley', is what you hear on your comms. You look out and see Clay perched on top of a tower, with his sniper that had just killed the guys who was gonna kill you.\n");
                printf("You give Clay a thumbs up.\n");
                get_char("Press any key to continue.\n");
                printf("\n");
                printf("You and Jason gather around the insurgent Cerberus had taken, and try to interrogate him.\n");
                printf("'(in pashto) Where is the American?'\n");
                printf("You scumbags will never find him.\n");
                printf("'Alright', says Doug and shoots the insurgent dead.\n");
                get_char("Press any key to continue.\n");
                printf("\n");
                printf("You join your teammates who had cleared the rooms to the right and move up to the third floor, where the hostage is supposed to be.\n");
                printf("You merge with Team A and head upstairs.\n");
            }
        } // end of choice B

        printf("You head upstairs and reach a door lined with what looks like a wire of some sort.\n");
        get_char("Press any key to continue.\n");
        printf("\n");
        printf("'This place might be rigged with explosives. I think we need our EOD (explosive ordinance disposal) to check this out.\n");
        get_char("Press any key to continue.\n");
        printf("Mark, your EOD tech, comes forward.\n");
        printf("\n");
        get_char("Press any key to continue.\n");
        printf("\n");
        printf("He takes out a screwdriver and a mini plier, and works his way through the wires, eventually cutting a part of it.\n");
        get_char("Press any key to continue.\n");
        printf("\n");
        printf("'Defused. Good to go.', he says.\n");
        get_char("Press any key to continue.\n");
        printf("\n");
        printf("You walk to wards the door.\n");
        int breach2 = get_int("Press 1 to place C-4 on the door or press 2 to use your breaching shotgun.\n");
        if(breach2 == 1)
        {
             printf("You place a packet of C-4 on the door. Your team takes cover.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("You count down from 3 to 1, and press the trigger.\n");
             get_char("Press any key to detonate.\n");
             printf("\n");
             printf("BOOM! The door blasts and you take position as poinman and enter.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("You see the hostage blindfolded and held at gunpoint by an insurgent.\n");
        }
        else if(breach2 == 2)
        {
             printf("You take out your shotgun and aim at the hinges of the door.\n");
             get_char("Press any key to fire at the hinges.\n");
             printf("\n");
             printf("BAM BAM. The door falls inward. Jason throws in a flashbang and you enter as pointman followed by the rest.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("You see the hostage blindfolded and held at gunpoint by an insurgent.\n");
        }
        get_char("Press any key to fire .\n");
        printf("\n");
        printf("You aim at the insurgent's head and pull the trigger. He drops down dead.\n");
        get_char("Press any key to continue.\n");
        printf("\n");
        printf("The others clear the room of other insurgents. 'Clear!', you hear them say.\n");
        get_char("Press any key to continue.\n");
        printf("\n");
        printf("You approach the hostage.\n");
        int approach = get_int("Press 1 to approach the hostage withh your gun pointed at him or press 2 to approach the hostage by speaking reassuring words.\n");
        if(approach == 1)
        {
             printf("You approach the hostage with your gun pointed at him.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("Suddenly, the hostage pulls out a pistol and starts shooting.\n");
             get_char("Press any key to fire back.\n");
             printf("\n");
             printf("Good thing you had you gun pointed at the hostage. You fire 2 rounds to the chest and 1 shot to the head to confirm the kill.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("'What was that?', you say.\n");
             printf("\n");
             printf("'That was a decoy. So that means our package isn't here.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("Alpha Mike, this is Base. You have what seems to be 6 tangos and your package exiting the compound in a jeep.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("'Copy, out.' says Jason.\n");
             printf("(to all of you) we've gotta move NOW.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("Your team moves quickly down the stairs and out of the compund.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("Jason and Mark get into two nearby empty jeeps they spotted. Thay get in and start the cars by using the wires below the steering wheel.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("You get into Jason's jeep along with Clay, and position yourselves.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("'Base, requesting directions to the enemy jeep.\n");
             printf("\n");
             printf("Standby Alpha Mike.....The enemy jeep half a click to your east. Take a right, then after 200 feet take a left past the bazaar, then take a right. You will then be on their tails.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("'Copy that.', says Jason.\n");
             printf("\n");
             printf("Jason skillfully drives the jeep the way he way directed, swerving through corners with absolute speed and precision.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("Soon enough, as the your two jeeps take that right, you see the enemy jeep.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("You air down your sights and see 6 insurgents dressed in black, but you don't seem to find the hostage.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("Your jeeps are closing on the enemy. They start firing rounds at you. Your jeeps try to dodge them.\n");
             printf("A bullets zips past you and hits Clay in the shoulder. He grunts in pain.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("You provide some cover fire and then assess Clay, wrapping a tourniquet around Clay's shoulder.\n");
             printf("He gets up and starts firing back.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("You have now left the village. Your jeeps are now on either side of the enemy jeep.\n");
             get_char("Press any key to fire at the jeep..\n");
             printf("\n");
             printf("You fire and the other jeep take turns firing at the jeep, keeping distance when the other party is firing.\n");
             printf("You kill the driver and fire at the jeep's tires, slowing it down.\n");
             printf("Clay finishes off the others. The jeep starts decelerating and comes to a stop.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("You get out of you jeep and loo for the hostage. You hear muffled screams coming from a big metal box.\n");
             get_char("Press any key to open the box.\n");
             printf("\n");
             printf("You oopen the box to find Mr.Connor. His face is covered in soot and he whimpers at the sight of you.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("'Mr. Connor, we are the United States Military and we are here to get you home.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("You help and Kyle help Mr.Connor out of the box. Kyle then looks for any injuries.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("'Just a few bruises. Other than that, he is fine.', says Kyle.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("You help Mr.Connor get into the vehicle. Jason starts the car and you drive off.\n");
             printf("\n");
             printf("\n");
             printf("\n");
             printf("\n");
             char achievement2 = get_char("Congratulations! You have unclocked an achievement. Press A to receive and inspect it.\n");
             if(achievement2 == 'A' || achievement2 == 'a')
             {
                 printf("\n");
                 printf("\n");
                 printf(".                       _____                                                                  \n");
                 printf(".                     _/@@@@@A_@|                                                              \n");
                 printf("                     |@@@@@@@@|@|                                                              \n");
                 printf("                     |@@@@@@@/                                                                 \n");
                 printf(".                     V@@@@@@A     ____                                                        \n");
                 printf("                     _|@@@@@@|____|@@@@|__________                                             \n");
                 printf(".                  _/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|    ===       ===       ===     ===     === \n");
                 printf(".                 |@@@@@@@@@@|   |@@@|V   _|@|                                                 \n");
                 printf("                  |@@@@@@@@@@|__/@@@/____/@@@|                                                 \n");
                 printf("                 /@@@@@@@@@@@@@@@@@@@@@@@@@@/                                                  \n");
                 printf(".               |@@@@@@@@@@@@@@@@@@@@@@@@/                                                     \n");
                 printf("                |@@@@@@@@@@@@|V@@@@@@/                                                         \n");
                 printf("                |@@@@@@@@@@@@@@@|                                                              \n");
                 printf("                |@@@@@@@@@@@@@@@|                                                              \n");
                 printf(".               |@@@@@@@@@@@@@@@|                                                              \n");
                 printf(".                V@@@@@@@@@@@@@@|                                                              \n");
                 printf("                 |@@@@@@@@@@@@@@A                                                              \n");
                 printf(".                 V@@@@@@|V@@@@@@A                                                             \n");
                 printf(".                 |@@@@@@| V@@@@@@|                                                            \n");
                 printf("                  |@@@@@@| |@@@@@@|                                                            \n");
                 printf(".                 |@@@@@@|  V@@@@@A                                                            \n");
                 printf(".                 |@@@@@@|  |@@@@@@A                                                           \n");
                 printf(".                /@@@@@@/    V@@@@@@|                                                          \n");
                 printf(".               |@@@@@@|      |@@@@@|                                                          \n");
                 printf(".               |@@@@@/       |@@@@@|                                                          \n");
                 printf(".               |@@@@|        |@@@@@|                                                          \n");
                 printf(".               |@@@@|        |@@@@@|                                                          \n");
                 printf("               /@@@@/          V@@@/                                                           \n");
                 printf("              |@@@@|           |@@|                                                            \n");
                 printf("              |@@@@|          /@@@A__                                                          \n");
                 printf("               V@@@|         |@@@@@@@|                                                         \n");
                 printf("\n");
                 printf("\n");
                 printf("        @@@@  @@@  @@@@    @@@@@  @@@  @@ @@ @@@@@ @@@@@ @  @ @@@ @@ @ @@@@                                                    \n");
                 printf("        @@   @   @ @@@@     @@   @   @ @ @ @ @@@     @   @@@@  @  @@ @ @ @                                         \n");
                 printf("        @     @@@  @ @   @@@@@@   @@@  @   @ @@@@@   @   @  @ @@@ @ @@ @@@                                            \n");
                 printf("\n");
                 printf("                       @@@@ @@@@ @@@@@   @  @@@@@ @@@@@ @@@@                                          \n");
                 printf("                       @ @  @@@@ @@@    @@@   @   @@@   @@@@                                          \n");
                 printf("                       @@@  @ @  @@@@@ @   @  @   @@@@@ @ @                                          \n");
                 printf("\n");
                 printf("\n");
                 printf("\n");
                 printf("\n");
                 printf("\n");
                 printf("\n");
             }
             printf("Your team drives to the extraction point. Clay calls in the heliopter, which woulf take about 10 minutes to arrive.\n");
             printf("\n");
             printf("Suddenly, rounds start flying at you. You look ahead and see apprximately 30 insurgents advancing towards you. Maybe the noise from the firefight earlier might have given away your position, and that's how they followed you here.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("You and your team start firing back. The night vision gives your team an edge over the insurgents.\n");
             int fight2 = get_int("Press 1 to keep on firing or press 2 to use a grenade launcher.\n");
             if(fight2 == 1)
             {
                 printf("You keep on firing at the redzone. The incoming enemy rounds outmatch the outgoing enemy rounds.\n");
                 get_char("Press any key to continue.\n");
                 printf("\n");

                 printf("As you keep on firing, an round hits Mr. Connor in the head. He drops down dead.\n");
                 printf("\n");
                 gameover();

             }
             else if(fight2 == 2)
             {
                 printf("You take hold of the grenade launcher and aim at the green zone.");
                 char fire1 = get_char("Press F to fire.\n");
                 if(fire1 == 'F' || fire1 == 'f')
                 {
                     printf("You fire at the redzone. The multiple basts of the grenades instantly eliminates many insurgents, and after a while, the redzone seems clear.\n");
                     get_char("Press any key to continue.\n");
                     printf("\n");
                     printf("You helicopter arrives. The gun's from the helicopter blast any remaining insurgents still around.\n");
                     get_char("Press any key to continue.\n");
                     printf("\n");
                     printf("You load Mr.Connor onto the helicopter and place him a stretcher.\n");
                     get_char("Press any key to continue.\n");
                     printf("\n");
                     printf("The helicopter lifts off from the ground and you head towards base.");
                     printf("\n");
                     printf("\n");
                     printf("\n");
                     printf("\n");
                     printf("Answer these questions to unlock the final achievement. P.S. some research might be requuired.\n");
                     printf("\n");
                     printf("1. Looking at your previous achievements, which coloured squadron did Riley belong to?(just type in the color; look which achievement might be the squadron logo.)\n.");
                     printf("\n");
                     printf("\n");
                     printf("2. What branch of the military was your unit a part of?\n");
                     printf("\n");
                     printf("\n");
                     printf("3. Under what command is your unit operated? (USSOCOM, NAVYSPECWAR, AFSOC, USASOC, JSOC, MARSOC)\n");
                     printf("\n");
                     printf("\n");
                     string answer = get_string("Answer as follows:   answer1;answer2;answer3 (please place semicolons between the answers with no space anywhere. everything must be lowercase. GOOD LUCK :))\n");
                     if(strncmp(answer, "gold;navy;jsoc", 14))
                     {
                        printf("\n");
                        printf("\n");
                        char achievement3 = get_char("Congratulations! You have unlocked your final achievement. Press \n");
                        if(achievement3 == 'A' || achievement3 == 'a')
                        {
                            printf("\n");
                            printf("\n");
                            printf("               *   *   *   *   *   *   *   * OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                            printf("                 *   *   *   *   *   *   *    : : : : : : : : : : : : : : : : : : : :  \n");
                            printf("               *   *   *   *   *   *   *   * OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                            printf("                 *   *   *   *   *   *   *    : : : : : : : : : : : : : : : : : : : :  \n");
                            printf("               *   *   *   *   *   *   *   * OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                            printf("                 *   *   *   *   *   *   *    : : : : : : : : : : : : : : : : : : : :  \n");
                            printf("               *   *   *   *   *   *   *   * OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                            printf("               : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : :   \n");
                            printf("               OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                            printf("               : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : :   \n");
                            printf("               OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                            printf("               : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : :   \n");
                            printf("               OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                            printf("               : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : :   \n");
                            printf("               OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                            printf("      \n");
                            printf("               @@@@ @@@@@   @   @@@  @ @   @@@@@  @@@    @    @@@@@   @   @@@                  \n");
                            printf("               @@@@ @@@    @@@  @  @  @      @   @   @   @    @@@    @@@  @  @                 \n");
                            printf("               @ @  @@@@@ @   @ @@@   @      @    @@@    @@@@ @@@@@ @   @ @@@                  \n");
                            printf("\n");
                            printf("               @@@@ @@@@@   @   @@@  @ @   @@@@@  @@@    @@@@@  @@@  @    @     @@@  @     @   \n");
                            printf("               @@@@ @@@    @@@  @  @  @      @   @   @   @@@   @   @ @    @    @   @  @ @ @    \n");
                            printf("               @ @  @@@@@ @   @ @@@   @      @    @@@    @      @@@  @@@@ @@@@  @@@    @ @     \n");
                            printf("\n");
                            printf("               @@ @ @@@@@ @   @ @@@@@ @@@@    @@@  @  @ @@@ @@@@@                              \n");
                            printf("               @@ @ @@@    @ @  @@@   @@@@   @   @ @  @  @    @                                \n");
                            printf("               @ @@ @@@@@   @   @@@@@ @ @     @@@   @@  @@@   @                                \n");
                            printf("                                                 @                                             \n");
                            printf("\n");
                            printf("\n");
                            printf("\n");
                            get_char("Press any key to continue.\n");
                            printf("\n");
                            printf("Thank You for playing THE WARRIOR ELITE.\n");
                            printf("\n");
                            printf("\n");
                            printf("                                    CREDITS:\n");
                            printf("\n");
                            printf("                          Game Developer: PARTH TARE\n");
                         }

                     }

                 }
             }
         }
         else if(approach == 2)
         {
             printf("'Mr. Connor, we're from the United States Military. We're gonna get you home.\n");
             get_char("Press any key to continue.\n");
             printf("\n");
             printf("Suddenly, the hostage pulls out a pistol and starts shooting.\n");
             printf("\n");
             printf("A bullet from the pistol hit's your face. Your vision blurs and blacks out, as you drop dead to the floor.\n");

            gameover();

         }
    }
}


void gameover()
{
    printf("MISSION FAILED.\n");
    printf("  GAME OVER    \n");
}

void playInTeamRoom()
{
    printf("The team room is empty. You should probably go to the briefing room.\n");
}


