#include<stdio.h>
int main()
{
int a=7 , *b;
*b=a;
printf(" the address of a is %u \n",&a); //%u is used to display address of the no 
printf(" the value of a is %d \n",*b);  
return 0;
}