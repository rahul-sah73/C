#include<stdio.h>
int main()
{
FILE *ptr;
int A,B,C;
ptr=fopen("question_1.txt","r");
fscanf(ptr,"%d%d%d",&A , &B ,&C );
printf("your num is %d\n",A);
printf("your num is %d\n",B);
printf("your num is %d\n",C);
return 0;
} 