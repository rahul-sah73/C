#include<stdio.h>
int main()
{

// FILE *ptr;

// int num; 
// ptr = fopen("rahul.txt","r");
// fscanf(ptr,"%d",&num);          //fscanf--> helps to take value from file 
// printf("your number is %d",num);
                                            // file must be exist 
// fclose(ptr);         // must be close after opeaning

FILE *cid;
int num=456;
cid = fopen("roshan.txt","w");
fprintf(cid,"your number is %d \n",num);   // to write file dont need to exist
fprintf(cid,"in this way we can use file function" );   // to write file dont need to exist
fclose(cid);
return 0;

}