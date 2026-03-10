#include<stdio.h>
int main()
{
char name[30];
printf("enter your name ");
gets(name);           // gets()---> it is used to input multiple character with sapce if we dont used it itwill take with out space 
// printf("your name is \n%s",name );
puts(name);  // it puts entered character into next line 
return 0;
}