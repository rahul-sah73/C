// how to real all the characters from file till the end

#include<stdio.h>
int main()
{
FILE *ptr;
char c;
ptr=fopen("readall.txt","r");
c=fgetc(ptr);
while(c!=EOF){               //EOF---> end of file 
    printf("%c",c);
    c=fgetc(ptr);
}
return 0;
}