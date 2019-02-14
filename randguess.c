// Generates and prints a random number
// between 1 and 100
// Then gets the player's name and prints
// game instructions.
// Dr Bill, Nov 2018

#include <stdio.h>
#include <stdlib.h> // contains random # generator code
#include <time.h> // for seeding the random generator
#include <cs50.h>
#include <string.h>

int main(void)
{
    // Seed the random number generator
     srand(time(NULL));
    // generate the random number between 1 and 100
     int randNum;
     randNum = rand();
     randNum = rand()%100+1;
     // comment this out when actually playing
     printf("The random number is %i\n", randNum);
     // get the player's non-NULL name
     string name = "";
     while (!strcmp(name, ""))
     {
         name = get_string("What's your name? ");
     }
     // Game instructions
     printf("Hi, %s!\n", name);
     printf("%s, guess a number between 1 and 100.\n", name);
     printf("If you guess correctly in less than 8 tries, you WIN!\n");
     printf("Otherwise, I win...\n\n");
    // YOUR CODE GOES AFTER HERE
    // Note that exit(0); can be included anywhere to end the game
    exit(0);
    // Say goodbye!
}
