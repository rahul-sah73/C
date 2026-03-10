#include<stdio.h>
void display();    //-----> function 
int main()  
{
 display ();      // -----> function calling 
 printf("here the functon  have done its work\n ");
return 0;
}

void display (){
    printf("this part is called finction defination\n ");   //--->function defination 
    int a=5  , b=6;
    int sum= a+b; 
    printf("%d \n",sum);
}

