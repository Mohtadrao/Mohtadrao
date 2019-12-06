/*                                                           ROCK PAPER SCISSORS GAME                                                           */
/* Name: Muhammad Mohtad Younus */
/* Roll no: 19I-1721 */
/* Section : AI-K */
/* Assignment #3 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* These two functions are already given by the proffessor. These are used to generate random choices made by computer */
int getComputerChoice()
{
return rand() % 3 + 1;
}
void initializeRandom()
{
srand( time(0) );
}

/* This is the function which is made to play rounds of the desired game */

int playRound(char name[], int roundNo)
{
int val;
int val1;
printf("Round %d. \n", roundNo);
printf("%s, please enter your choice for this round.\n", name);
printf("1 for ROCK, 2 for PAPER, and 3 for SCISSORS: ");
scanf("%d", &val);
val1=getComputerChoice();

/* If Esle functions are used to decide whether which no. is true and which is false */

if (val>3||val<0&&val1==2)
{
printf("Computer picked PAPER, %s picked INVALID.\n\n",name);
printf("Invalid choice. You lose.\n\n");
return 2;
}
else if(val>3||val<0&&val1==1)
{
printf("Computer picked ROCK, %s picked INVALID.\n\n",name);
printf("Invalid choice. You lose.\n\n");
return 2;
}
else if(val>3||val<0&&val1==3)
{
printf("Computer picked SCISSORS, %s picked INVALID.\n\n",name);
printf("Invalid choice. You lose.\n\n");
return 2;
}
else if(val==1&&val1==1)
{
printf("Computer picked ROCK, %s picked ROCK.\n\n",name);
printf("We picked the same thing! This round is a draw.\n\n");
return 3;
}
else if(val==2&&val1==2)
{
printf("Computer picked PAPER, %s picked PAPER.\n\n",name);
printf("We picked the same thing! This round is a draw.\n\n");
return 3;
}
else if(val==3&&val1==3)
{
printf("Computer picked SCISSORS, %s picked SCISSORS.\n\n",name);
printf("We picked the same thing! This round is a draw.\n\n");
return 3;
}
else if(val1==2&&val==1)
{
printf("Computer picked PAPER, %s picked ROCK.\n\n",name);
printf("PAPER covers ROCK. I win.\n\n");
return 2;
}
else if(val1==3&&val==2)
{
printf("Computer picked SCISSORS, %s picked PAPER.\n\n",name);
printf("SCISSORS cut PAPER. I win.\n\n");
return 2;
}
else if(val1==3&&val==1)
{
printf("Computer picked SCISSORS, %s picked ROCK.\n\n",name);
printf("ROCK Breaks SCISSORS. You win.\n\n");
return 1;
}
else if(val1==1&&val==2)
{
printf("Computer picked ROCK, %s picked PAPER.\n\n",name);
printf("PAPER covers ROCK. You win.\n\n");
return 1;
}
else if(val1==2&&val==3)
{
printf("Computer picked PAPER, %s picked SCISSORS.\n\n",name);
printf("SCISSORS cut PAPER. You win.\n\n");
return 1;
}
else if(val1==1&&val==3)
{
printf("Computer picked ROCK, %s picked SCISSORS.\n\n",name);
printf("ROCK Breaks SCISSORS. I win.\n\n");
return 2;
}

}

/* It is the main function used to run the program */

int main(void)
{
char name[12];
int r;

/* Here c is used for computer, u for user and d for draws which helps to indicate whether what is the result */

int c=0;
int u=0;
int d=0;
initializeRandom();
printf("Welcome to ROCK PAPER SCISSORS.\n");
printf("I, Computer, will be your opponent.\n");
printf("Please type in your name and press return: ");
scanf("%s", name);
printf("Welcome %s.\n\n", name);
printf("All right %s. We will be playing 3 rounds.\n\n", name);
r = playRound(name, 1);

/* These are 3 rounds result */

if(r==1)
u++;
else if(r==2)
c++;
else
d++;
r = playRound(name, 2);
if(r==1)
u++;
else if(r==2)
c++;
else
d++;
r = playRound(name, 3);
if(r==1)
u++;
else if(r==2)
c++;
else
d++;
printf("Number of times Computer won: %d\n",c);
printf("Number of times %s won: %d\n",name,u);
printf("Number of draws: %d\n",d);

/* It is used to tell whether who has mastered/won the game */

if (c > u)
{
printf("I, Computer, am a master at ROCK, PAPER, SCISSORS.\n");
}
if (u > c)
{
printf("You, %s, are a master at ROCK, PAPER, SCISSORS.\n",name);
}

if (u==c)
{
printf("We are evenly matched.\n");
}

}


