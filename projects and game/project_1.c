#include<stdio.h>
#include<stdlib.h>            
#include<time.h>            

int main(){                  
	
	 int number, guess , nguess=1;            
	 srand(time(0));
	 number = rand()%100;        
   // printf(" the random number is %d \n", number);
    do {	
    
    printf(" guess the number\n");
    scanf("%d",&guess);
    if (guess>=number+20)
    {
    	printf(" your number is too high  \n");
	}
	else if ( guess > number && guess< number+20)
	{
		printf(" your number is high \n");
	}
	else if ( guess <= number-20 )
	{
		printf(" your number is too low \n");
	}
	else if (guess< number && guess > number-20)
	{
		printf("your number is low \n ");
		
	}
	else{
		printf("your number is correct \n");
		printf(" guessed in %d attempts \n",nguess);
	}
	
    nguess++;
	}while( guess!=number);
	
	
	return 0;
}
