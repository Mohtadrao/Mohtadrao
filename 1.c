#include <stdio.h>
  

  
void Top(int z)
{
int i=0,j=0,k=0;
if(z==3)
{
i=6,j=6,k=6;
}
else if(z==5)
{
i=3; j=3; k=3;
}
while(i<(z+12))
{
printf(" ");
i++;
}
printf("!\n");
while(j<(z+10))
{
printf(" ");
j++;
}
printf("(***)\n");
while(k<(z+9))
{
printf(" ");
k++;
}
printf("|O|O|O|\n");
}





void middle(int z)
{
int i=0,j=0,k=0,l=7,m=23;
if(z == 3)
{
m=3;
}
else if(z == 5)
{
m=13;
}
else if(z >= 7)
{
while(l!=z)
{
m+=4;
l+=2;
}
}
printf("  ______");
while(i < m){
printf(" ");
i++;
}
printf("______\n");
printf("  |    |");
while(j  < m){
printf(" ");
j ++;
}
printf("|    |\n");
printf("  |    |");
while(k < m){
printf("_");
k++;
}
printf("|    |\n");
}






void equal()
{
printf("       _____     \n");
printf("       |   |     \n");
printf("       |   |     \n");
printf("  ____ |___| ____\n");
printf(" /   /  ___  \\   \\\n");
printf("/ * /  /___\\  \\ * \\\n");
}




void middleup(int z)
{
int i=0,j=0;
printf("   /\\");
if(z==3){
i=6,j=6;
}else if(z==5){
i=3; j=3; 
}
while(i<(z+3)){
printf("_");
i++;
}
printf("---------");
while(j<(z+3)){
printf("_");
j++;
}
printf("/\\\n");
}





void spaces(int z)
{
int i=0,j=0;
printf("  ");
if(z==3){
i=6,j=6;
}else if(z==5){
i=3; j=3; 
}
while(i<(z+7)){
printf("=");
i++;
}
printf(" _____ ");
while(j<(z+7)){
printf("=");
j++;
}
printf("\n");
}




void equaldown(int z)
{
int i=0,j=0;
printf("  | || ");
while(i<((z-5)/2)){
printf("O ");
j++;
}
if(z==3){
printf("|   | ");
}else if(z==5){
printf("O || |   | || O ");
}else{
printf("|| O || |   | || O || ");
while(j<((z-5)/2)){
printf("O ");
j++;
}		
}
printf("|| |\n");
}





void equalup(int z)
{
int i=0,j=0;
printf("  | || ");
while(i<((z-5)/2)){
printf("O ");
i++;
}
if(z==3){
printf("O O O ");
}else if(z==5){
printf("O || O O O || O ");
}else{
printf("|| O || O O O || O || ");	
while(j<((z-5)/2)){
printf("O ");
j++;
}	
}
printf("|| |\n");
}





void same(int z)
{
int i=0,j=0;
printf("  | || ");
while(i<((z-5)/2)){
printf("O ");
i++;
}
if(z==3){
printf("|___| ");
}else if(z==5){
printf("O || |___| || O ");
}else{	
printf("|| O || |___| || O || ");
}
while(j<((z-5)/2)){
printf("O ");
j++;
}
printf("|| |\n");
}




void grass(int z)
{
int i=0,j=0;
printf(" /");
if(z==3){
i=6; j=6; 
}else if(z==5){
i=3; j=3; 
}
while(i<(z+6)){
printf(" ");
i++;
}
printf("/  ___  \\");
while(j<(z+6)){
printf(" ");
j++;
}
printf("\\\n");
int a=0,b=0,c=7,d=0,n=1;
if(z==3){
printf("/ * /  /___\\  \\ * \\\n");			
}else if(z==5){
printf("/ * * * */  /___\\  \\* * * * \\\n");
}else{
printf("/ ");
while(c!=z){
n++;
c+=2;
}
d=c-n;
while(a < d){
printf("* ");
a++;
}
printf("/  /___\\  \\ ");
while(b < d){
printf("* ");
b++;
}
printf("\\\n");
}
}






void equal2(int z)
{
int i=0,j=0;
printf("  ");
if(z==3){
i=6,j=6;
}else if(z==5){
i=3; j=3; 
}
while(i<(z+7)){
printf(" ");
i++;
}
printf(" _____ ");
while(j<(z+7)){
printf(" ");
j++;
}
printf("\n");
}





void equal3(int z)
{
int i=0,j=0;
printf("  ");
if(z==3){
i=6,j=6;
}else if(z==5){
i=3; j=3; 
}
while(i<(z+7)){
printf(" ");
i++;
}
printf(" |   | ");
while(j<(z+7)){
printf(" ");
j++;
}
printf("\n");
}




void equal4(int width, int floor)
{
int i=0,j=0;       
printf("  ");
if(width==3){
i=6,j=6;
}else if(width==5){
i=3; j=3; 
}
while(i<(width+7)){
printf("_");
i++;
}
if(floor==0){
printf(" |___| ");
}else{
printf(" |   | ");
}
while(j<(width+7)){
printf("_");
j++;
}
printf("\n");
}

void all(int width1, int floor)
{

if (floor==0){
equal2(width1);
equal3(width1);
equal3(width1);
equal4(width1,floor);
}else if (floor==1){
equal2(width1);
equal3(width1);
equal4(width1,floor);	
}else if(floor==2){
equal2(width1);
equal4(width1,floor);
equaldown(width1);
}


}


int main(void)
{
int floor,width;
printf("FAST Main Building in ASCII Art\n");
printf("Enter number of floors: ");
scanf("%d",&floor);
printf("Enter width of building: ");
scanf("%d",&width);

	
if(width % 2 == 0){
width=width-1;
}
if(width<3){
equal();
return 0;
}
if(floor >= 8){
middle(width);
}else if((floor < 8) && (floor > 2)){
Top(width);
middleup(width);
}	
if(floor == 3){
int a=1;
spaces(width);
while(floor != a){
equaldown(width);
a++;
}
}
else if (floor >= 4){
int a=3;
while(floor != a){
equalup(width);
a++;
}
spaces(width);


}
if(floor>0){
same(width);
}
grass(width);


return 0;
}

