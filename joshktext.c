//this game is a satire on school and running for president. It is very much a work in progress. It is supposed to be where you are running for class president by completing tasks for other students for reputation while also trying to be good with teachers. I also know that there is a more efficent way to do a lot of code, but I sort learned as I went, and now realize that what i did was wrong, for instance it would have been better to use a constant string for asking a question and then have if functions for each room.
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int weight;
string notebook;
string notebookWriting;
bool wrote=false;
int stamina=0;
int t=0;
int height;
int ch=0;
string Changed;
string Indoor_House;
bool fruit=false;
bool eggs=false;
bool frozen_breakfast=false;
string Room;
int Hunger=0;
string FRUIT;
string kitchen;
string EGGS;
string Frozen_Breakfast;
bool snow_storm=false;
bool covid=false;
bool game=false;
string living_room;
string outside_house;
int Broken_Tooth=0;
bool FrozenBreakfastcooked=false;
bool Eggscooked=false;
int driveskill=0;
string Direction1;
int drivex=0;
int drivey=0;
bool havecar=false;
bool crashed=false;
//if you are too heavy
void tooheavy(){
    printf("You were so heavy that you hit your body couldn't support you, you fell over and had to be carried to the hospital. Please choose again.\n");
    weight=get_int("How heavy are you in whole pounds?\n");
    if (weight>970){
    tooheavy();
    }
}
//if you are too light
void toosmall(){
    printf("You never existed in the first place. You wake up and see fire all around you and then you see Satan in front of you. Please choose again.\n");
    weight=get_int("How heavy are you in whole pounds?\n");
    if (weight<0){
    toosmall();
    }
}
//determines weight and hopefully strength when I get to needing it.
void Wait(){
    weight=get_int("How heavy are you in whole pounds?\n");
    if (weight>974){
    tooheavy();
    }
    else if (weight<0){
    toosmall();
    }
}
//allows you to run, will allow you to get to school faster if you want to, or need to run, supposed to be used in certain situations, which is supposed to be learned
void run(){
stamina=stamina-weight/10;
}
//allows for cheat codes, and taking notes, later want to make it so it saves the string so you can add to it, but it is not important so will focus on it later.
void desk1(){
    printf("On the desk you see a note book.");
    if (wrote==false){
    notebook=get_string("Write in the notebook?\nA. Yes\nB. No\n");
    }
    else if (wrote==true){
    notebook=get_string("Write in the notebook?\nA. Yes\nB. No\n");
    }
    t=t+1;
    if (strcmp(notebook, "A")==0){
    notebookWriting=get_string("");
    t=t+1;
    wrote=1;
    if (strcmp(notebookWriting, "08/22/04")==0){
    printf("You Won!");
    exit(0);
    }
    else{
        desk1(Room);
    }
    }
    if (strcmp(notebook, "B")==0){
    Room=get_string("What do you do?");
    }
    else{
        desk1(Room);
    }
}
//allows for cheat codes, and taking notes, later want to make it so it saves the string so you can add to it, but it is not important so will focus on it later. this is for if you have already written in your notebook.
void desk2(){
    printf("On the desk you see a note book.");
    if (wrote==false){
    notebook=get_string("Write in the notebook?\nA. Yes\nB. No\n");
    }
    else if (wrote==true){
    notebook=get_string("Write in the notebook?\nA. Yes\nB. No\nRead in the notebook?\nC. Yes\n");
    }
    t=t+1;
    if (strcmp(notebook, "A")==0){
    notebookWriting=get_string("");
    t=t+1;
    wrote=1;
    if (strcmp(notebookWriting, "08/22/04")==0){
    printf("You Won!");
    exit(0);
    }
    else{
        desk2();
    }
    }
    if (strcmp(notebook, "B")==0){
    Room=get_string("What do you do?");
    }
    if (strcmp(notebook, "C")==0){
    printf("%s\n", notebookWriting);
    }
    else{
        desk2();
    }
}
//allows you to get changed for school, if you go to school in your pajamas characters will comment on you looking weird.
void closet(){
    Changed=get_string("Would you like to change?\nA. Yes\nB. No\n");
    if ((strcmp(Changed, "A")==0)&&ch==0){
    printf("You are now wearing a sweatshirt and jeans.\n");
    ch=1;
    Room=get_string("What do you do?");
    }
    else if ((strcmp(Changed, "A")==0)&&ch==1){
    printf("You are now wearing pajamas.\n");
    ch=0;
    Room=get_string("What do you do?");
    }
    if (strcmp(Changed, "B")==0){
    Room=get_string("What do you do?");
    }
    else{
        closet();
    }
}
//allows you to grab food for cooking and eating
void fridge(){
    if(fruit==false||eggs==false||frozen_breakfast==false){
    printf("In the fridge there is a bowl of fruit, eggs, and a frozen breakfast.\n");
    string Fridge=get_string("What do you do? Use take 'name of the item'");
        if (strcmp(Fridge, "take bowl of fruit")==0){
            fruit=true;
            FRUIT=get_string("Eat bowl of fruit?\nA. Yes\nB. No");
            if(strcmp(FRUIT, "A")==0){
                printf("eaten\n");
                Hunger=50;
                fruit=false;
                t=t+1;
                kitchen=get_string("What do you do?");
            }
            if(strcmp(FRUIT, "B")==0){
                printf("Not eaten\n");
                kitchen=get_string("What do you do?");
            }
            else{
            fridge();
        }
        }
        if (strcmp(Fridge, "take eggs")==0){
            fruit=true;
            EGGS=get_string("Eat eggs?\nA. Yes\nB. No");
            if(strcmp(EGGS, "A")==0){
                printf("You are not Rocky, you cannot consume raw eggs without puking from disgust. Why didn't you cook the eggs on the stove.\n");
                eggs=false;
                t=t+1;
                kitchen=get_string("What do you do?");
            }
            if(strcmp(EGGS, "B")==0){
                printf("Not eaten\n");
                kitchen=get_string("What do you do?");
            }
            else{
            fridge();
        }
        }
        if (strcmp(Fridge, "take frozen breakfast")==0){
            frozen_breakfast=true;
            Frozen_Breakfast=get_string("Eat frozen breakfast?\nA. Yes\nB. No");
            if(strcmp(Frozen_Breakfast, "A")==0){
                printf("You broke a tooth. Why would you eat a frozen breakfast without first microwaving it?\n");
                frozen_breakfast=false;
                t=t+1;
                Broken_Tooth=Broken_Tooth+1;
                kitchen=get_string("What do you do?");
            }
            if(strcmp(EGGS, "B")==0){
                printf("Not eaten\n");
                kitchen=get_string("What do you do?");
            }
            else{
            fridge();
        }
        }
        if (strcmp(Fridge, "Walk backward")==0){
        printf("There is a fridge, a stove, and microwave\n");
        kitchen=get_string("What do you do?");
        }
        if (strcmp(Fridge, "Run backward")==0){
        printf("There is a fridge, a stove, and microwave\n");
        kitchen=get_string("What do you do?");
        }
        else{
            fridge();
        }
    }
    else{
        fridge();
    }
}
//allows you to cook eggs to eat
void stove(){
    if(eggs==true&&Eggscooked==false){
        string Stove=get_string("Cook you eggs?\nA. Yes\nB. No");
        if(strcmp(Stove, "A")==0){
        printf("Your eggs have been cooked and smell delicious!!\n");
        Eggscooked=true;
        t=t+5;
        string EGgs=get_string("Eat eggs?\nA. Yes\nB. No");
            if(strcmp(EGgs, "A")==0){
            eggs=false;
            Hunger=100;
            printf("There is a fridge, a stove, and microwave\n");
            kitchen=get_string("What do you do?");
            t=t+1;
            }
            if(strcmp(EGgs, "B")==0){
            printf("There is a fridge, a stove, and microwave\n");
            kitchen=get_string("What do you do?");
            }
            else{
            EGgs=get_string("Eat eggs?\nA. Yes\nB. No");
            }
        }
        if(strcmp(Stove, "B")==0){
        printf("There is a fridge, a stove, and microwave\n");
        kitchen=get_string("What do you do?");
        }
        else{
            Stove=get_string("Cook your eggs?\nA. Yes\nB. No");
        }
    }
    else if(eggs==false){
        printf("What are you going to do in this stove? You have nothing to cook.\n");
        printf("There is a fridge, a stove, and microwave\n");
        kitchen=get_string("What do you do?");
    }
    else if(Eggscooked==true){
        printf("You already cooked your eggs.\n");
        printf("There is a fridge, a stove, and microwave\n");
        kitchen=get_string("What do you do?");
    }
}
//allows for cooking frozen breakfast to eat
void microwave(){
    if(frozen_breakfast==true&&FrozenBreakfastcooked==false){
        string Microwave=get_string("Cook you eggs?\nA. Yes\nB. No");
        if(strcmp(Microwave, "A")==0){
        printf("Your frozen breakfast has been cooked!\n");
        Eggscooked=true;
        t=t+3;
        string Frozone=get_string("Eat eggs?\nA. Yes\nB. No");
            if(strcmp(Frozone, "A")==0){
            frozen_breakfast=false;
            Hunger=75;
            printf("There is a fridge, a stove, and microwave\n");
            kitchen=get_string("What do you do?");
            t=t+1;
            }
            if(strcmp(Frozone, "B")==0){
            printf("There is a fridge, a stove, and microwave\n");
            kitchen=get_string("What do you do?");
            }
            else{
            Frozone=get_string("Eat eggs?\nA. Yes\nB. No");
            }
        }
        if(strcmp(Microwave, "B")==0){
        printf("There is a fridge, a stove, and microwave\n");
        kitchen=get_string("What do you do?");
        }
        else{
            Microwave=get_string("Cook your frozen breakfast?\nA. Yes\nB. No");
        }
    }
    else if(frozen_breakfast==false){
        printf("What are you going to do in this microwave? You have nothing to cook.\n");
        printf("There is a fridge, a stove, and microwave\n");
        kitchen=get_string("What do you do?");
    }
    else if(FrozenBreakfastcooked==true){
        printf("You already cooked your frozen breakfast.\n");
        printf("There is a fridge, a stove, and microwave\n");
        kitchen=get_string("What do you do?");
    }
}
//Kitchen, where you can grab food and cook food
void Kitchen(){
    printf("There is a fridge, a stove, and microwave\n");
    kitchen=get_string("What do you do?");
    if (strcmp(kitchen, "Run to fridge")==0){
    fridge();
    t=t+1;
    run();
    }
    if (strcmp(kitchen, "Walk to fridge")==0){
    fridge();
    t=t+1;
    }
    if (strcmp(kitchen, "Run to stove")==0){
    stove();
    t=t+1;
    run();
    }
    if (strcmp(kitchen, "Walk to stove")==0){
    stove();
    t=t+1;
    }
    if (strcmp(kitchen, "Run to microwave")==0){
    microwave();
    t=t+1;
    run();
    }
    if (strcmp(kitchen, "Walk to microwave")==0){
    microwave();
    t=t+1;
    }
    if (strcmp(kitchen, "Walk backward")==0){
        printf("You are in an open room with a kitchen, a living room, and a door. If you want to go back, walk or run backward.\n");
        Indoor_House=get_string("What do you do?");
    }
    if (strcmp(kitchen, "Run backward")==0){
        printf("You are in an open room with a kitchen, a living room, and a door. If you want to go back, walk or run backward.\n");
        Indoor_House=get_string("What do you do?");
    }
    else{
        Kitchen();
    }
}
//the living room, where you have a random chance of watching one of these, they will allow conversation starters for quests later in the game. You can watch all of them or none of them. Plan to add more later.
void Living_Room(){
    int num=rand() % 3;
    printf("There is a tv.\n");
    living_room=get_string("Watch tv?\nA. Yes\nB. No\n");
    if (strcmp(living_room, "A")==0){
        t=t+5;
        srand(time(0));
        if (num==0){
        printf("The Tv tells you about a snow storm coming on the weekend.\n");
        printf("You are in an open room with a kitchen, a living room, and a door. If you want to go back, walk or run backward.\n");
        Indoor_House=get_string("What do you do?");
        }
        if (num==1){
        printf("The Tv tells you about a covid outbreak in the town next door.\n");
        printf("You are in an open room with a kitchen, a living room, and a door. If you want to go back, walk or run backward.\n");
        Indoor_House=get_string("What do you do?");
        }
        if (num==2){
        printf("The Tv tells you about the basketball game yesterday, the home team won.\n");
        printf("You are in an open room with a kitchen, a living room, and a door. If you want to go back, walk or run backward.\n");
        Indoor_House=get_string("What do you do?");
        }
    }
    if (strcmp(living_room, "B")==0){
        printf("You are in an open room with a kitchen, a living room, and a door. If you want to go back, walk or run backward.\n");
        Indoor_House=get_string("What do you do?");
    }
    else{
        living_room=get_string("Watch tv?\nA. Yes\nB. No\n");
    }
}
//clock function
void drivetime(int time_left){
    clock_t start;
    start = clock();
    for (int i=0; 1;(i++)){
        time_left = (int)(clock()-start) / CLOCKS_PER_SEC;
        printf("%i", time_left);
    }
}
//asks you to type a direction before time runs out.
void drivething(int time_left){
    Direction1=get_string("");
    if(time_left>=5){
    printf("you crashed");
    crashed=true;
}
if(strcmp(Direction1, "Right")==0){
    printf("You went right");
    drivex=drivex+1;
    }
    if(strcmp(Direction1, "Left")==0){
    printf("You went left");
    drivex=drivex-1;
    }
    if(strcmp(Direction1, "Forward")==0){
    printf("You went forward");
    drivey=drivey+1;
    }
    if(strcmp(Direction1, "Backwards")==0){
    printf("You went forward");
    drivey=drivey-1;
    }
    else{
        printf("you crashed");
        crashed=true;
    }
}
//parallel functions, and also adds time
void direction1(int time_left){
    printf("Type either Left, Right, Forward, or Backward to move.");
    t=t+1;
    #pragma omp parallel sections
    #pragma omp section
        drivetime(time_left);
    #pragma omp section
        drivething(time_left);
    }
    //driving function, this or a function that has to do with it is the reason that my program is breaking
void Driving(){
    havecar=true;
    int time_left=0;
    driveskill=driveskill+1;
    int x=1;
    //loop to get to school once you get to a certain x or a y
    while ((drivex!=7&&drivey!=4)||crashed==true){
    direction1(time_left);
    Direction1="nothing";
    }
    printf("you made it");
}
//where you can drive
void Garage(){
    string Car=get_string("Get in Car?\nA. Yes\nB. No\n");
    if (strcmp(Car, "A")==0){
        printf("You are in the car and have started to drive.\n");
        Driving();
    }
}
//essentially on your lawn outside of the front door
void OutsideHouse(){
    printf("You are outside the house. There is a bus stop, a garage, a street and a sidewalk.\n");
    outside_house=get_string("What do you do?\n");
    if (strcmp(outside_house, "Walk forward")==0){
    printf("You walked into the middle of the street where you then proceeded to get hit by a truck and die. Please try again.");
    OutsideHouse();
    }
    if (strcmp(outside_house, "Run forward")==0){
    printf("You ran into the middle of the street where you then proceeded to get hit by a truck and die. Please try again.");
    OutsideHouse();
    }
    if (strcmp(outside_house, "Walk to garage")==0){
    printf("You walked into the garage where you see a car, your driving is not great however, but if you want to drive it you can.");
    Garage();
    t=t+1;
    }
    if (strcmp(outside_house, "Run to garage")==0){
    printf("You walked into the garage where you see a car, your driving is not great however, but if you want to drive it you can.");
    Garage();
    run();
    t=t+1;
    }
}
//where you can access the rest of the house outside of the bedroom
void indoor_house(){
    printf("You are in an open room with a kitchen, a living room, and a door. If you want to go back, walk or run backward.\n");
    Indoor_House=get_string("What do you do?");
    if (strcmp(Indoor_House, "Walk forward")==0){
    printf("You walked into a wall\n");
    t=t+1;
    Room=get_string("What do you do?");
    }
    if (strcmp(Indoor_House, "Run forward")==0){
    run();
    printf("You Ran into a wall\n You screamed in pain. Your father walks in and screams at you to get up and stop messing around. You have to go to school.\n She left.\n");
    Room=get_string("What do you do?");
    t=t+1;
    }
    if (strcmp(Indoor_House, "Run to living room")==0){
        Living_Room();
        run();
        t=t+1;
    }
    if (strcmp(Indoor_House, "Walk to living room")==0){
        Living_Room();
        t=t+1;
    }
    if (strcmp(Indoor_House, "Run to kitchen")==0){
        Kitchen();
        run();
        t=t+1;
    }
    if (strcmp(Indoor_House, "Walk to kitchen")==0){
        Kitchen();
        t=t+1;
    }
     if (strcmp(Indoor_House, "Run to door")==0){
        OutsideHouse();
        run();
        t=t+1;
    }
    if (strcmp(Indoor_House, "Walk to door")==0){
        OutsideHouse();
        t=t+1;
    }
    if (strcmp(Indoor_House, "Walk backward")==0){
        printf("You are in a room with a door, a closet, and a desk. You have to go to school.\n");
        Room=get_string("What do you do?");
    }
    if (strcmp(Indoor_House, "Run backward")==0){
        printf("You are in a room with a door, a closet, and a desk. You have to go to school.\n");
        Room=get_string("What do you do?");
    }
    else {
        indoor_house();
    }
}
//where you wake up, your bedroom
void room(){

    printf("You just woke up. You are in a room with a door, a closet, and a desk. You have to go to school.\n");
    Room=get_string("What do you do?");
    if (strcmp(Room, "Walk forward")==0){
    printf("You walked into a wall\n");
    t=t+1;
    Room=get_string("What do you do?");
    }
    if (strcmp(Room, "Run forward")==0){
    run();
    printf("You Ran into a wall\n You screamed in pain. Your mother walks in and screams at you what is wrong with you.\n She left.\n");
    Room=get_string("What do you do?");
    t=t+1;
    }
    if (strcmp(Room, "Run to desk")==0){
    run();
    if(wrote==false){
    desk1();
    }
    else if(wrote==true){
        desk2();
    }
    }
    if (strcmp(Room, "Walk to desk")==0){
    if(wrote==false){
    desk1();
    }
    else if(wrote==true){
        desk2();
    }
    }
    if (strcmp(Room, "Run to closet")==0){
        closet();
        run();
    }
    if (strcmp(Room, "Walk to closet")==0){
        closet();
    }
    if (strcmp(Room, "Walk to door")==0){
        indoor_house();
    }
    if (strcmp(Room, "Run to door")==0){
        indoor_house();
        run();
    }
    else
    {
        room();
    }
}

//if you are rediculously tall or short
void tootall(){
    printf("You were so tall that you hit your head on a ceiling, fell over and had to be carried to the hospital. Please choose again.\n");
    height=get_int("How tall are you in whole inches?\n");
    if (height>84){
    tootall();
    }
}
void tooshort(){
    printf("You never existed in the first place. You wake up and see fire all around you and then you see Satan in front of you. Please choose again.\n");
    height=get_int("How tall are you in whole inches?\n");
    if (height<0){
    tooshort();
    }
}
//finding height
void Height(){
    height=get_int("How tall are you in whole inches?\n");
    if (height>84){
    tootall();
    }
    else if (height<0){
    tooshort();
    }
}
//parallel functions to be used throughout the game
void par(){
    if (fruit==true&&(strcmp(Room, "Eat fruit")==0)){
    printf("eaten\n");
    Hunger=50;
    fruit=false;
    t=t+1;
    room();
    }
    if (fruit==true&&(strcmp(Indoor_House, "Eat fruit")==0)){
    printf("eaten\n");
    Hunger=50;
    fruit=false;
    t=t+1;
    indoor_house();
    }
    if (fruit==true&&(strcmp(outside_house, "Eat fruit")==0)){
    printf("eaten\n");
    Hunger=50;
    fruit=false;
    t=t+1;
    OutsideHouse();
    }
    if (fruit==true&&(strcmp(kitchen, "Eat fruit")==0)){
    printf("eaten\n");
    Hunger=50;
    fruit=false;
    t=t+1;
    Kitchen();
    }
    if (eggs==true&&Eggscooked==false&&(strcmp(Room, "Eat eggs")==0)){
    printf("You are not Rocky, you cannot consume raw eggs without puking from disgust. Why didn't you cook the eggs on the stove.\n");
    eggs=false;
    t=t+1;
    room();
    }
    if (eggs==true&&Eggscooked==false&&(strcmp(Indoor_House, "Eat eggs")==0)){
    printf("You are not Rocky, you cannot consume raw eggs without puking from disgust. Why didn't you cook the eggs on the stove.\n");
    eggs=false;
    t=t+1;
    indoor_house();
    }
    if (eggs==true&&Eggscooked==false&&(strcmp(outside_house, "Eat eggs")==0)){
    printf("You are not Rocky, you cannot consume raw eggs without puking from disgust. Why didn't you cook the eggs on the stove.\n");
    eggs=false;
    t=t+1;
    OutsideHouse();
    }
    if (eggs==true&&Eggscooked==false&&(strcmp(kitchen, "Eat eggs")==0)){
    printf("You are not Rocky, you cannot consume raw eggs without puking from disgust. Why didn't you cook the eggs on the stove.\n");
    eggs=false;
    t=t+1;
    Kitchen();
    }
    if (eggs==true&&Eggscooked==true&&(strcmp(Room, "Eat eggs")==0)){
    printf("eaten\n");
    eggs=false;
    Hunger=100;
    t=t+1;
    room();
    }
    if (eggs==true&&Eggscooked==true&&(strcmp(Indoor_House, "Eat eggs")==0)){
    printf("eaten\n");
    eggs=false;
    Hunger=100;
    t=t+1;
    indoor_house();
    }
    if (eggs==true&&Eggscooked==true&&(strcmp(outside_house, "Eat eggs")==0)){
    printf("eaten\n");
    eggs=false;
    Hunger=100;
    t=t+1;
    OutsideHouse();
    }
    if (eggs==true&&Eggscooked==true&&(strcmp(kitchen, "Eat eggs")==0)){
    printf("eaten\n");
    eggs=false;
    Hunger=100;
    t=t+1;
    Kitchen();
    }
    if (frozen_breakfast==true&&FrozenBreakfastcooked==false&&(strcmp(Room, "Eat frozen breakfast")==0)){
    printf("You broke a tooth. Why would you eat a frozen breakfast without first microwaving it?\n");
    frozen_breakfast=false;
    t=t+1;
    Broken_Tooth=Broken_Tooth+1;
    room();
    }
    if (frozen_breakfast==true&&FrozenBreakfastcooked==false&&(strcmp(Indoor_House, "Eat frozen breakfast")==0)){
    printf("You broke a tooth. Why would you eat a frozen breakfast without first microwaving it?\n");
    frozen_breakfast=false;
    t=t+1;
    Broken_Tooth=Broken_Tooth+1;
    indoor_house();
    }
    if (frozen_breakfast==true&&FrozenBreakfastcooked==false&&(strcmp(outside_house, "Eat frozen breakfast")==0)){
    printf("You broke a tooth. Why would you eat a frozen breakfast without first microwaving it?\n");
    frozen_breakfast=false;
    t=t+1;
    Broken_Tooth=Broken_Tooth+1;
    OutsideHouse();
    }
    if (frozen_breakfast==true&&FrozenBreakfastcooked==false&&(strcmp(kitchen, "Eat frozen breakfast")==0)){
    printf("You broke a tooth. Why would you eat a frozen breakfast without first microwaving it?\n");
    frozen_breakfast=false;
    t=t+1;
    Broken_Tooth=Broken_Tooth+1;
    Kitchen();
    }
    if (frozen_breakfast==true&&FrozenBreakfastcooked==true&&(strcmp(Room, "Eat frozen breakfast")==0)){
    printf("eaten\n");
    frozen_breakfast=false;
    Hunger=75;
    t=t+1;
    room();
    }
    if (frozen_breakfast==true&&FrozenBreakfastcooked==true&&(strcmp(Indoor_House, "Eat frozen breakfast")==0)){
    printf("eaten\n");
    frozen_breakfast=false;
    Hunger=75;
    t=t+1;
    indoor_house();
    }
    if (frozen_breakfast==true&&FrozenBreakfastcooked==true&&(strcmp(outside_house, "Eat frozen breakfast")==0)){
    printf("eaten\n");
    frozen_breakfast=false;
    Hunger=75;
    t=t+1;
    OutsideHouse();
    }
    if (frozen_breakfast==true&&FrozenBreakfastcooked==true&&(strcmp(kitchen, "Eat frozen breakfast")==0)){
    printf("eaten\n");
    frozen_breakfast=false;
    Hunger=75;
    t=t+1;
    Kitchen();
    }
     if (eggs==false&&Eggscooked==false&&(strcmp(Room, "Eat eggs")==0)){
    printf("You are not Rocky, you cannot consume raw eggs without puking from disgust. Why didn't you cook the eggs on the stove.\n");
    eggs=false;
    t=t+1;
    room();
    }
    if (eggs==false&&Eggscooked==false&&(strcmp(Indoor_House, "Eat eggs")==0)){
    printf("You don't have any eggs");
    indoor_house();
    }
    if (eggs==false&&Eggscooked==false&&(strcmp(outside_house, "Eat eggs")==0)){
    printf("You don't have any eggs");
    OutsideHouse();
    }
    if (eggs==false&&Eggscooked==false&&(strcmp(kitchen, "Eat eggs")==0)){
    printf("You don't have any eggs");
    Kitchen();
    }
    if (eggs==false&&Eggscooked==true&&(strcmp(Room, "Eat eggs")==0)){
    printf("You don't have any eggs");
    room();
    }
    if (eggs==false&&Eggscooked==true&&(strcmp(Indoor_House, "Eat eggs")==0)){
    printf("You don't have any eggs");
    indoor_house();
    }
    if (eggs==false&&Eggscooked==true&&(strcmp(outside_house, "Eat eggs")==0)){
    printf("You don't have any eggs");
    OutsideHouse();
    }
    if (eggs==false&&Eggscooked==true&&(strcmp(kitchen, "Eat eggs")==0)){
    printf("You don't have any eggs");
    Kitchen();
    }
    if (frozen_breakfast==false&&FrozenBreakfastcooked==false&&(strcmp(Room, "Eat frozen breakfast")==0)){
    printf("You don't have any frozen breakfasts");
    room();
    }
    if (frozen_breakfast==false&&FrozenBreakfastcooked==false&&(strcmp(Indoor_House, "Eat frozen breakfast")==0)){
    printf("You don't have any frozen breakfasts");
    indoor_house();
    }
    if (frozen_breakfast==false&&FrozenBreakfastcooked==false&&(strcmp(outside_house, "Eat frozen breakfast")==0)){
    printf("You don't have any frozen breakfasts");
    OutsideHouse();
    }
    if (frozen_breakfast==false&&FrozenBreakfastcooked==false&&(strcmp(kitchen, "Eat frozen breakfast")==0)){
    printf("You don't have any frozen breakfasts");
    Kitchen();
    }
    if (frozen_breakfast==false&&FrozenBreakfastcooked==true&&(strcmp(Room, "Eat frozen breakfast")==0)){
    printf("You don't have any frozen breakfasts");
    room();
    }
    if (frozen_breakfast==false&&FrozenBreakfastcooked==true&&(strcmp(Indoor_House, "Eat frozen breakfast")==0)){
    printf("You don't have any frozen breakfasts");
    indoor_house();
    }
    if (frozen_breakfast==false&&FrozenBreakfastcooked==true&&(strcmp(outside_house, "Eat frozen breakfast")==0)){
    printf("You don't have any frozen breakfasts");
    OutsideHouse();
    }
    if (frozen_breakfast==false&&FrozenBreakfastcooked==true&&(strcmp(kitchen, "Eat frozen breakfast")==0)){
    printf("You don't have any frozen breakfasts");
    Kitchen();
    }
    while (Hunger>0){
    Hunger=Hunger-t;
}
    while (stamina<100){
    stamina=stamina+t;
    }
}
int main(void){
    printf("Character Creator:\n");
    string name=get_string("What is your name?\n");
    Height();
    Wait();
    printf("tutorial: There are two movement types running, and walking.\n In order to move, you start the command with one of these.\n Then either list a direction or an object as it is stated in the writing before it.\nEx. Run forward Ex.\nWalk to desk.\nIn dialogue, if given options, type the letter of the dialogue option you would like to choose.\nKeep an eye out for hidden dialogue options that you can choose if you know them from the code.\n");

    #pragma omp section
    room();
    #pragma omp section
    par();
}

