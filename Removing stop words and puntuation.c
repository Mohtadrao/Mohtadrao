#include<stdio.h>

int main(void){
int i=0,j=0;
//FILE *fp;
char a[1000];
char ch[1000];
printf("original text:\n");

scanf("%[^\n]s",&ch[i]);/*
for(i=0;(ch[1000]=getchar())!='\0';i++){
if(ch[i]=='\0')
break;
}*/
//fp=fopen("t.txt", "r");

//fgets(ch,1000,fp);

//for(int i=0;(ch[i]=getchar())!='\0';i++){

//}



printf("\n\n");
printf("After removal of stop words:\n");
i=0;
while(ch[i]!='\0')
{
if(ch[i]==' ' && ch[i+1]=='i' && ch[i+2]=='s' && ch[i+3]==' ')
i+=3;

if(ch[i]==' ' && ch[i+1]=='a' && ch[i+2]=='r' && ch[i+3]=='e' && ch[i+4]==' ')
i+=4;

if(ch[i]==' ' && ch[i+1]=='a' && ch[i+2]=='m' && ch[i+3]==' ')
i+=3;

if(ch[i]==' ' && ch[i+1]=='a' && ch[i+2]==' ')
i+=2;

if(ch[i]==' ' && ch[i+1]=='t' && ch[i+2]=='h' && ch[i+3]=='e' && ch[i+4]==' ')
i+=4;

if(ch[i]==' ' && ch[i+1]=='a' && ch[i+2]=='n' && ch[i+3]=='d' && ch[i+4]==' ')

i+=4;

if(ch[i]==' ' && ch[i+1]=='o' && ch[i+2]=='f' && ch[i+3]==' ')
i+=3;

if(ch[i]=='.')
i+=1;

if(ch[i]==',')
i+=1;

if(ch[i]==';')
i+=1;

if(ch[i]=='!')
i+=1;

if(ch[i]==':')
i+=1;

if(ch[i]==' ' && ch[i]=='\0')
break;
else{
printf("%c",ch[i]);
a[j]=ch[i];

j++;

i++;
}




}
//fclose(fp);
printf("\n\n");
printf("Count of unique words:\n");
i=0,j=0;
int k=0,l=0;
for(k=0;a[k]!='\0';k++){

for(i=l;a[i]!=' ';i++)

{if(a[i]=='\0')
break;
if(a[i]==' ')
{
break;}
else
{
printf("%c",a[i]);

l++;
}

}

if(a[i]=='\0')
break;
l++;
printf("\n");

}


/*
while(a[i]!='\0')
{
if(a[i]==' ' && a[i+1]=='a' || a[i])
{
i++;}







}
*/

}
