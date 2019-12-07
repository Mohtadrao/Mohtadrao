/*Muhammad Mohtad Younus*/
/*19I-1721*/
/*Bs(AI-K1)*/

#include <stdio.h>

int main(void)
{

long int n,i=1,j=9,k=1,x,y;
printf("Enter a number: ");
scanf("%ld", &n);

if(n==1)
{
printf("%ld\n",n);
}

else
{

while(i<n)
{

long int r=0;

for(j=9;j>=0;j--)
{

int z=0;

for(x=k;x!=0;x)
{

y=x%10;
x=x/10;

if(y==j)
{
z++;
}

}

if(z!=0)
{
r=(r*10)+j;
r=(r*10)+z;
}

}

k=r;


if(i==n-1)
{
printf("%ld\n", k);
}

i++;

}

}

return 0;


}
