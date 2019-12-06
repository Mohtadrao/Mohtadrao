/*Muhammad Mohtad Younus*/
/*19I-1721*/
/*Bs(AI-K)*/
/*Assignment*/


#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>



//Making void unction for print according to given format
void print(int index,int x, int y,int z){

//Printing according to given format
                        printf("\nNumber of sentence: %d\n",y);
                        printf("Number of words: %d\n",x);
                        printf("Number of characters: %d\n",z);
                        printf("Readability Index: %d\n",index);



}

//Writing the main function so to execute and make code simple and easy to read
int main(void)
{

//Initializing Entry
                        int Entry=1;

//Using a loop so that the execution of code does not stop
                        while(Entry!=0){


//Declaring values                        
                        int x=1,y=1,z=0,v=0,w=1,index=0;
                        float calculation=0;
                        char get[1000];
                        printf("Enter sentence %d: ",Entry);
                                                
//Using for loop to get a characters and see how many characters are there in it
                        for(w=0;(get[1000]=getchar())!='\n';w++){

                           /*                    
                        if(get[0]=='q' && get[1]=='u' && get[2]=='i' && get[3]=='t')
                        {
                        exit(0);
                        }*/
            
                        if(get[1000]=='\t' || get[1000]=='\0' || get[1000]=='\n' || get[1000]==' '){
                        x++;
                        }

                        if(get[1000]==':' || get[1000]=='.' ||  get[1000]=='?' || get[1000]=='!' || get[1000]==';'){
                        y++;
                        }                      

                        if(isalnum(get[1000])){
                        z++;
                        }
}


//Doing calculations to find ARI
                        calculation=((4.71*(z/x))+(0.5*(x/y)))-21.43;

//Here Index is represented as index
                        index= ceil(calculation);

                        if(index<0){
                        index=v;
                        }

//Calling function from above
                        print(index,x,y,z);

//Increment m so that while number of entries increases
                        Entry++;

                        printf("\n");

}

                        return 0;

}
