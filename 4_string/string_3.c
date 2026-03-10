#include<stdio.h>
#include<string.h>
int main()
{
char name[]="rahul";
char name_2[3];
char name_3[]="sah";

//int lenght=strlen(name);   // ---> to measure the length of character 
// strcpy(name_2,name);      //---> to copy from anotheer ----> strcpy( to , from );
strcat(name,name_3) ;     // to add character with out space  ---> name_3 will be added in name
     // strcm(___1 , ___2);  used to compare two strings    

printf("your name is %s",name);
// printf("your name is %s",name_2);
// printf("the length of your name is %d",lenght ); 
return 0;
}