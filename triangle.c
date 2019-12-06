/* Name: Muhammad Mohtad Younus */
/* Roll no: 19I-1721 */
/* Section : AI-K */
/* Assignment #4 */

#include <stdio.h>


void spaces(int a)
{if (a==0)
{
return;
}
else
{
printf("  ");
spaces(a-1);
}
}

int pascal(int a, int b)
{
if (b == 0 || b == a)
return 1;
return pascal(a - 1, b - 1) + pascal(a - 1, b);
}


void line(int a, int b)
{
int c = pascal(a, b);

if (c>=10)
{
printf("%d  ", c);
}
else
{
printf(" %d  ", c);}
if(a == b) { printf("\n"); return;
}
line(a, b+1);
}


void line1(int d, int e)
{
if(d > e) return;
spaces((e-d));
line(d, 0 );
line1(d + 1, e);
}


int main(void)
{
int lines;
printf("Enter the number of rows in Pascal's Triangle: ");
scanf(" %d",&lines);
line1(0, lines);
}
