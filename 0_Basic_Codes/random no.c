#include<stdio.h>
#include<stdlib.h>           // ----> to generate random number these geader file must be included 
#include<time.h>            

int main(){                  // srand(time(0))  helps to give  random different number each time
	
	 int number;            //  -----> and ran() means random
	 srand(time(0));
	 number = rand()%100;         //---> %100 will help to  give random no btn 0 to 99   if we put %10 then btn 0 to 9 
printf(" the random number is %d", number);
	
	return 0;
}
  