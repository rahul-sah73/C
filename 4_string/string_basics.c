#include<stdio.h>
int main()
{
// int str[] = {'h','a','h','u','l','\0'};  either write string in this formate or below one .. below one is
 //                                            more easy and convenient  
  
         // ' \0 '   ----> is a null character must be written if string is in above format  

char str[] = "rahul";
char *ptr = str;    //[0] ;  // or just write str

while (*ptr != '\0')
{
   printf("%c",*ptr);
   ptr++;
}

return 0;
}