/*Muhammad Mohtad Younus*/
/*BS(AI-K1)*/
/*19I-1721*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void compare(int c,int b){

if(c > b)
printf("Positive Sentiment\n");
else if(c < b)
printf("Negative Sentiment\n");
else
printf("Neutral Sentiment\n");
}


int includingstring(char arr[][100],char arr2[],int count)
{
int i = 0;

while(i < count)
{
if(strncmp(arr[i], arr2,100) == 0)
{
return 1;
}
i++;
}

return 0;
}

int Lines(char name[])
{
int count = 0;

FILE *fptr = fopen(name, "r");
if (fptr == NULL)
{
printf("File cannot be open \n");
}
char ch = fgetc(fptr);
while (ch != EOF)
{
if(ch == '\n') count++;
ch = fgetc(fptr);
}

fclose(fptr);
return count;
}

void Extracting(char name[], char array[][100])
{
FILE *fptr = fopen(name, "r");
char ch = fgetc(fptr);
int i = 0,j=0;

if (fptr == NULL)
{
printf("Cannot open file \n");
return;
}

while (ch != EOF)
{
if(ch == '\n')
{
j=0;
i++;			
}
else
{
array[i][j] = ch;
j++;
}
ch = fgetc(fptr);
}

fclose(fptr);
}


int main()
{    


char a;
while(a!='R'){

int pw = Lines("positive-words.txt");
int nw = Lines("negative-words.txt");
int stopWordsCount= Lines("stopwords.txt");
char positiveWords[pw][100];
char negativeWords[nw][100];
char stopWords[stopWordsCount][100];
Extracting("positive-words.txt",positiveWords);
Extracting("negative-words.txt",negativeWords);
char n[1000],word[100][100];
int i=0,j=0,k=0;
printf("\nenter a review -- Enter 'R' to exit:\n");
scanf("%[^\n]s",&n[i]);
if(n[i]=='R' || n[i]=='r')
exit(0);
while(i < strlen(n)){
if(n[i] == ' ' || n[i] == '\n'){
k=0;
j++;
}
else
{
word[j][k] = tolower(n[i]);
k++;
}
i++;
}
while(word[j][k]!='\0')
{if(word[j][k]=='!')
{printf(" ");k+=1;}
else if(word[j][k]=='.')
{printf(" ");k+=1;}

else if(word[j][k]==',')
{printf(" ");k+=1;}

else if(word[j][k]=='?')
{printf(" ");k+=1;}

else if(word[j][k]==';')
{printf(" ");k+=1;}

else if(word[j][k]==':')

{printf(" ");k+=1;}

else if(word[j][k]=='-')
{printf(" ");k+=1;}

else if(word[j][k]=='_')
{printf(" ");k+=1;}

else if(word[j][k]=='{')
{printf(" ");k+=1;}

else if(word[j][k]=='}')
{printf(" ");k+=1;}

else if(word[j][k]==']')
{printf(" ");k+=1;}

else if(word[j][k]=='[')
{printf(" ");k+=1;}

else if(word[j][k]=='(')
{printf(" ");k+=1;}

else if(word[j][k]==')')
{printf(" ");k+=1;}

else if(word[j][k]=='"')
{printf(" ");k+=1;}


else if(word[j][k]=='*')
{printf(" ");k+=1;}





else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='y' && word[j][k+1]=='o' && word[j][k+2]=='u' && word[j][k+3]=='r' && word[j][k+4]=='s' && word[j][k+5]=='e' && word[j][k+6]=='l' && word[j][k+7]=='v' && word[j][k+8]=='e' && word[j][k+9]=='s' && word[j][k+10]==' '){i=i+11;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]=='m' && word[j][k+4]=='s' && word[j][k+5]=='e' && word[j][k+6]=='l' && word[j][k+7]=='v' && word[j][k+8]=='e' && word[j][k+9]=='s' && word[j][k+10]==' '){i=i+11;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='u' && word[j][k+2]=='r' && word[j][k+3]=='s' && word[j][k+4]=='e' && word[j][k+5]=='l' && word[j][k+6]=='v' && word[j][k+7]=='e' && word[j][k+8]=='s' && word[j][k+9]==' '){i=i+10;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='y' && word[j][k+1]=='o' && word[j][k+2]=='u' && word[j][k+3]=='r' && word[j][k+4]=='s' && word[j][k+5]=='e' && word[j][k+6]=='l' && word[j][k+7]=='f' && word[j][k+8]==' '){i=i+9;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='i' && word[j][k+2]=='m' && word[j][k+3]=='s' && word[j][k+4]=='e' && word[j][k+5]=='l' && word[j][k+6]=='f' && word[j][k+7]==' '){i=i+8;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='e' && word[j][k+2]=='r' && word[j][k+3]=='s' && word[j][k+4]=='e' && word[j][k+5]=='l' && word[j][k+6]=='f' && word[j][k+7]==' '){i=i+8;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='b' && word[j][k+1]=='e' && word[j][k+2]=='c' && word[j][k+3]=='a' && word[j][k+4]=='u' && word[j][k+5]=='s' && word[j][k+6]=='e' && word[j][k+7]==' '){i=i+8;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='g' && word[j][k+2]=='a' && word[j][k+3]=='i' && word[j][k+4]=='n' && word[j][k+5]=='s' && word[j][k+6]=='t' && word[j][k+7]==' '){i=i+8;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='b' && word[j][k+1]=='e' && word[j][k+2]=='t' && word[j][k+3]=='w' && word[j][k+4]=='e' && word[j][k+5]=='e' && word[j][k+6]=='n' && word[j][k+7]==' '){i=i+8;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='r' && word[j][k+3]=='o' && word[j][k+4]=='u' && word[j][k+5]=='g' && word[j][k+6]=='h' && word[j][k+7]==' '){i=i+8;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='f' && word[j][k+1]=='u' && word[j][k+2]=='r' && word[j][k+3]=='t' && word[j][k+4]=='h' && word[j][k+5]=='e' && word[j][k+6]=='r' && word[j][k+7]==' '){i=i+8;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='n' && word[j][k+2]=='l' && word[j][k+3]=='y' && word[j][k+4]=='o' && word[j][k+5]=='w' && word[j][k+6]=='n' && word[j][k+7]==' '){i=i+8;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='m' && word[j][k+1]=='y' && word[j][k+2]=='s' && word[j][k+3]=='e' && word[j][k+4]=='l' && word[j][k+5]=='f' && word[j][k+6]==' '){i=i+7;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='i' && word[j][k+1]=='t' && word[j][k+2]=='s' && word[j][k+3]=='e' && word[j][k+4]=='l' && word[j][k+5]=='f' && word[j][k+6]==' '){i=i+7;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]=='i' && word[j][k+4]=='r' && word[j][k+5]=='s' && word[j][k+6]==' '){i=i+7;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='a' && word[j][k+2]=='v' && word[j][k+3]=='i' && word[j][k+4]=='n' && word[j][k+5]=='g' && word[j][k+6]==' '){i=i+7;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]=='a' && word[j][k+4]=='n' && word[j][k+5]=='d' && word[j][k+6]==' '){i=i+7;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='d' && word[j][k+1]=='u' && word[j][k+2]=='r' && word[j][k+3]=='i' && word[j][k+4]=='n' && word[j][k+5]=='g' && word[j][k+6]==' '){i=i+7;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='b' && word[j][k+1]=='e' && word[j][k+2]=='f' && word[j][k+3]=='o' && word[j][k+4]=='r' && word[j][k+5]=='e' && word[j][k+6]==' '){i=i+7;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='s' && word[j][k+1]=='h' && word[j][k+2]=='o' && word[j][k+3]=='u' && word[j][k+4]=='l' && word[j][k+5]=='d' && word[j][k+6]==' '){i=i+7;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='y' && word[j][k+1]=='o' && word[j][k+2]=='u' && word[j][k+3]=='r' && word[j][k+4]=='s' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]=='i' && word[j][k+4]=='r' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]=='s' && word[j][k+4]=='e' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='h' && word[j][k+2]=='i' && word[j][k+3]=='c' && word[j][k+4]=='h' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='h' && word[j][k+2]=='o' && word[j][k+3]=='m' && word[j][k+4]=='e' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='o' && word[j][k+3]=='s' && word[j][k+4]=='e' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='b' && word[j][k+1]=='e' && word[j][k+2]=='i' && word[j][k+3]=='n' && word[j][k+4]=='g' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='d' && word[j][k+1]=='o' && word[j][k+2]=='i' && word[j][k+3]=='n' && word[j][k+4]=='g' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='u' && word[j][k+1]=='n' && word[j][k+2]=='t' && word[j][k+3]=='i' && word[j][k+4]=='l' && word[j][k+5]==' '){i=i+6;}


else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='h' && word[j][k+2]=='i' && word[j][k+3]=='l' && word[j][k+4]=='e' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='b' && word[j][k+2]=='o' && word[j][k+3]=='u' && word[j][k+4]=='t' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='f' && word[j][k+2]=='t' && word[j][k+3]=='e' && word[j][k+4]=='r' && word[j][k+5]==' '){i=i+6;}


else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='b' && word[j][k+2]=='o' && word[j][k+3]=='v' && word[j][k+4]=='e' && word[j][k+5]==' '){i=i+6;}


else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='b' && word[j][k+1]=='e' && word[j][k+2]=='l' && word[j][k+3]=='o' && word[j][k+4]=='w' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='u' && word[j][k+1]=='n' && word[j][k+2]=='d' && word[j][k+3]=='e' && word[j][k+4]=='r' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='g' && word[j][k+2]=='a' && word[j][k+3]=='i' && word[j][k+4]=='n' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]=='r' && word[j][k+4]=='e' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]=='r' && word[j][k+4]=='e' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='t' && word[j][k+2]=='h' && word[j][k+3]=='e' && word[j][k+4]=='r' && word[j][k+5]==' '){i=i+6;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='u' && word[j][k+2]=='r' && word[j][k+3]=='s' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='y' && word[j][k+1]=='o' && word[j][k+2]=='u' && word[j][k+3]=='r' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]=='y' && word[j][k+4]==' '){i=i+5;}


else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]=='m' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='e' && word[j][k+2]=='r' && word[j][k+3]=='s' && word[j][k+4]==' '){i=i+5;}


else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='h' && word[j][k+2]=='a' && word[j][k+3]=='t' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='i' && word[j][k+3]=='s' && word[j][k+4]==' '){i=i+5;}



else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='a' && word[j][k+3]=='t' && word[j][k+4]==' '){i=i+5;}


else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='e' && word[j][k+2]=='r' && word[j][k+3]=='e' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='d' && word[j][k+1]=='o' && word[j][k+2]=='e' && word[j][k+3]=='s' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='b' && word[j][k+1]=='e' && word[j][k+2]=='e' && word[j][k+3]=='n' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='a' && word[j][k+2]=='v' && word[j][k+3]=='e' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='i' && word[j][k+2]=='t' && word[j][k+3]=='h' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='f' && word[j][k+1]=='r' && word[j][k+2]=='o' && word[j][k+3]=='m' && word[j][k+4]==' '){i=i+5;}


else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='i' && word[j][k+1]=='n' && word[j][k+2]=='t' && word[j][k+3]=='o' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='d' && word[j][k+1]=='o' && word[j][k+2]=='w' && word[j][k+3]=='n' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='v' && word[j][k+2]=='e' && word[j][k+3]=='r' && word[j][k+4]==' '){i=i+5;}



else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]=='n' && word[j][k+4]==' '){i=i+5;}


else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='n' && word[j][k+2]=='c' && word[j][k+3]=='e' && word[j][k+4]==' '){i=i+5;}


else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='e' && word[j][k+2]=='r' && word[j][k+3]=='e' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]=='n' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='b' && word[j][k+1]=='o' && word[j][k+2]=='t' && word[j][k+3]=='h' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='e' && word[j][k+1]=='a' && word[j][k+2]=='c' && word[j][k+3]=='h' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='m' && word[j][k+1]=='o' && word[j][k+2]=='r' && word[j][k+3]=='e' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='m' && word[j][k+1]=='o' && word[j][k+2]=='s' && word[j][k+3]=='t' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='s' && word[j][k+1]=='o' && word[j][k+2]=='m' && word[j][k+3]=='e' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='s' && word[j][k+1]=='u' && word[j][k+2]=='c' && word[j][k+3]=='h' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='s' && word[j][k+1]=='a' && word[j][k+2]=='m' && word[j][k+3]=='e' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='h' && word[j][k+2]=='a' && word[j][k+3]=='n' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='v' && word[j][k+1]=='e' && word[j][k+2]=='r' && word[j][k+3]=='y' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='i' && word[j][k+2]=='l' && word[j][k+3]=='l' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='j' && word[j][k+1]=='u' && word[j][k+2]=='s' && word[j][k+3]=='t' && word[j][k+4]==' '){i=i+5;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='u' && word[j][k+2]=='r' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='y' && word[j][k+1]=='o' && word[j][k+2]=='u' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='i' && word[j][k+2]=='m' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='i' && word[j][k+2]=='s' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='s' && word[j][k+1]=='h' && word[j][k+2]=='e' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='e' && word[j][k+2]=='r' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='i' && word[j][k+1]=='t' && word[j][k+2]=='s' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='r' && word[j][k+2]=='e' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='a' && word[j][k+2]=='s' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='h' && word[j][k+2]=='o' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='a' && word[j][k+2]=='s' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='a' && word[j][k+2]=='d' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='d' && word[j][k+1]=='i' && word[j][k+2]=='d' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='b' && word[j][k+1]=='u' && word[j][k+2]=='t' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='f' && word[j][k+1]=='o' && word[j][k+2]=='r' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='u' && word[j][k+2]=='t' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='f' && word[j][k+2]=='f' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='h' && word[j][k+2]=='y' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='o' && word[j][k+2]=='w' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='l' && word[j][k+2]=='l' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='n' && word[j][k+2]=='y' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='f' && word[j][k+1]=='e' && word[j][k+2]=='w' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='n' && word[j][k+1]=='o' && word[j][k+2]=='r' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='n' && word[j][k+1]=='o' && word[j][k+2]=='t' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='o' && word[j][k+2]=='o' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='c' && word[j][k+1]=='a' && word[j][k+2]=='n' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='d' && word[j][k+1]=='o' && word[j][k+2]=='n' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='n' && word[j][k+1]=='o' && word[j][k+2]=='w' && word[j][k+3]==' '){i=i+4;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='m' && word[j][k+1]=='e' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='m' && word[j][k+1]=='y' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='w' && word[j][k+1]=='e' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='i' && word[j][k+1]=='t' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='h' && word[j][k+1]=='e' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='m' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='i' && word[j][k+1]=='s' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='b' && word[j][k+1]=='e' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='d' && word[j][k+1]=='o' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='n' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='i' && word[j][k+1]=='f' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='r' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='s' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='f' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]=='t' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='b' && word[j][k+1]=='y' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]=='o' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='u' && word[j][k+1]=='p' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='i' && word[j][k+1]=='n' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='o' && word[j][k+1]=='n' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='n' && word[j][k+1]=='o' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='s' && word[j][k+1]=='o' && word[j][k+2]==' '){i=i+3;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='a' && word[j][k+1]==' '){i=i+2;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='s' && word[j][k+1]==' '){i=i+2;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='t' && word[j][k+1]==' '){i=i+2;}

else if((word[j][k-1]==' ' || word[j][k-1]=='\0') && word[j][k]=='i' && word[j][k+1]==' '){i=i+2;}






else if(word[j][k]==' ' && word[j][k]=='\0')
break;

else
{

k++;
}

}
int c = 0 , b = 0;
i=0;
while(i <= j){
if(includingstring(positiveWords,word[i],pw))
c++;
else if(includingstring(negativeWords,word[i],nw))
b++;
i++;
}
compare(c,b);
scanf("%c",&a);
}

return 0;
}
