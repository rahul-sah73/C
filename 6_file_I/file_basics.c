#include<stdio.h>
int main()
{
FILE *ptr;
ptr = fopen("question_1.exe","r");   // fopen(" FILE NAME "  ,"  mode ")   mode= read=r or write=w  
return 0;
}

/*
r---> for reading                              types of  file 
rb---> open for rading in binary                  text file--->    .txt , .c 
w----> open for writing                           binary file ---> .jpg , .dat
wb----> open for writing in binary 
a-----> open for append
*/