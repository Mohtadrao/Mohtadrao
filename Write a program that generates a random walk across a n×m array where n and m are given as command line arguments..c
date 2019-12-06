/*Muhammad Mohtad Younus*/
/*Bs(AI-k)*/
/*19I-1721*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int replacing_dots(int m, int n, char mXn[m][n])
{
int a, b, c, d,i=0;
char z;

//Calling for random choices
srand(time(NULL));
a=rand()%m;
b=rand()%n;

//Using loop thatwill allow to change the alphabet
for(int i='A';i<='Z';i++) 
{
c=rand()%4;

//Using 4 cases of switch each representing one direction
switch(c)
{

case 0:
if ((b + 1 < n) && (mXn[a][b + 1] == '.'))
{
mXn[a][++b] = i;
break;
}
else
{
d++;
}
if ((b - 1 >= 0) && (mXn[a][b - 1] == '.'))
{
mXn[a][--b] = i;
break;
}
else
{
d++;
}
if ((a - 1  >= 0) && (mXn[a - 1][b] == '.'))
{
mXn[--a][b] = i;
break;
}
else
{
d++;
}
if ((a + 1 < m) && (mXn[a + 1][b] == '.'))
{
mXn[++a][b] = i;
break;
}
else
{
d++;
}
break;

case 1:
if ((b - 1 >= 0) && (mXn[a][b - 1] == '.'))
{
mXn[a][--b] = i;
break;
}
else
{
d++;
}
if ((b + 1 < n) && (mXn[a][b + 1] == '.'))
{
mXn[a][++b] = i;
break;
}
else
{
d++;
}
if ((a - 1  >= 0) && (mXn[a - 1][b] == '.'))
{
mXn[--a][b] = i;
break;
}
else
{
d++;
}
if ((a + 1 < m) && (mXn[a + 1][b] == '.'))
{
mXn[++a][b] = i;
break;
}
else
{
d++;
}
break;

case 2:
if ((a - 1  >= 0) && (mXn[a - 1][b] == '.'))
{
mXn[--a][b] = i;
break;
}
else
{
d++;
}
if ((a + 1 < m) && (mXn[a + 1][b] == '.'))
{
mXn[++a][b] = i;
break;
}
else
{
d++;
}
if ((b + 1 < n) && (mXn[a][b + 1] == '.'))
{
mXn[a][++b] = i;
break;
}
else
{
d++;
}
if ((b - 1 >= 0) && (mXn[a][b - 1] == '.'))
{
mXn[a][--b] = i;
break;
}
else
{
d++;
}
break;

case 3:
if ((a + 1 < m) && (mXn[a + 1][b] == '.'))
{
mXn[++a][b] = i;
break;
}
else
{
d++;
}
if ((a - 1  >= 0) && (mXn[a - 1][b] == '.'))
{
mXn[--a][b] = i;
break;
}
else
{
d++;
}
if ((b + 1 < n) && (mXn[a][b + 1] == '.'))
{
mXn[a][++b] = i;
break;
}
else
{
d++;
}
if ((b - 1 >= 0) && (mXn[a][b - 1] == '.'))
{
mXn[a][--b] = i;
break;
}
else
{
d++;
}
break;

}

//d representing number of places u cannot go
if(d == 4) 
{
z = --i;
break;
} 
d = 0;
}
printf("\n");

//The Final steps
while(i < m)
{
int j=0;

while(j < n)
{
printf("%c ", mXn[i][j]);
j++;
}
printf("\n");
i++;
}

if(d==4)
printf("\nThe letter %c got trapped!\n", z);
else
printf("\nCompleted 'A' through 'Z'\n");
}

int main(int argc,char *argv[])
{

//Declaring and introducing
int m, n,i=0,j=0;
printf("No of m's: ");
scanf("%d", &m);
printf("No. of n's: ");
scanf("%d", &n);
char mXn[m][n];

//Building no. of dots
while(i < m)
{j=0;
while(j < n) 
{
mXn[i][j] = '.';
j++;
}
i++;
}

//Calling the main setup function and final call
replacing_dots(m, n, mXn);

}
