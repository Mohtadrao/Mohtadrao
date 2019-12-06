//Muhammad Mohtad Younus
//19i-1721
//BS(AI-K)
//Assignment 7


#include <stdio.h>
#include <ctype.h>
//including hangman.h file
#include "hangman.h"

#define GENRES 		3
#define ALPHABETS 	26
#define MAX_MISTAKES 5

//making main function
int main( void ) {
//Declaring ns required
int g,i=0,j=0,wr=0,win;
const char *s;
char unknwn[1000]={0};
char alphabets[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//Calling a function from hangman.h
init();
//starting of program
printf("Let's play the game of hangman.\n\n");
printf("The computer will pick a random phrase.\n");
printf("Enter letters for your guess.\n");
printf("After 5 wr guesses you lose.\n\n");
//Taking random things with help of hangman.h
printf("I am thinking of a %s ...\n", getGenre( g = getRandom(GENRES) ));
s = getPhrase( g );
//Drawing a loop to measure the size of unknown characters
while (s[i]!='\0')
{
if (isalpha(s[i])  )
{
unknwn[i]='*';j++;
}else if(s[i]==' ' )
{
unknwn[i]=s[i];
}else if(s[i]=='-' )
{
unknwn[i]=s[i];
}
++i;
}
printf("\n");
//the loop where the whole program starts from
while(1){
printf("The current phrase is %s\n\n",unknwn);
printf("The letters you have not guessed yet are:\n");
i=0;
while(i < 26)
{
if (alphabets[i]!='%')
{
printf("%c--",alphabets[i]);
}
i++;
}
printf("\n\n");
printf("Enter your next guess:");
//to reset the buffer value
char n;
scanf(" %c",&n);
char n2;
if (n>='a' && n<='z')
{
n2=n-32;
}
printf("You guessed %c.\n",n2);
char l='T';
i=0;
while(i <=strlen(s))
{
if (s[i]==n ){
unknwn[i]=s[i];
l='F';
win++;
}
if(s[i]==n2  ){
unknwn[i]=s[i];
l='F';
win++;
}
i++;
}
if(l=='T'){
showHangman(wr);
printf("Number of wr guesses so far: %d\n\n",++wr);
}
if(win==j){
printf("\nThe current phrase is %s\n",unknwn);
printf("\nYou Win!!.");
return 0;
}
if(wr==5){
printf("\nYou lose.");
printf("\nThe secret phrase was: %s\n",s);
exit(0);
}
i=0;
while(i < 26)
{
if (alphabets[i]==toupper(n) )
{
alphabets[i]='%';
}
i++;	
}
i=0;
}
printf("\n");
return 0;
}
