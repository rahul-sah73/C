#include<stdio.h>
int main()
{
FILE *ptr;
int num ;
printf(" enter your number for the table ");
scanf("%d",&num);
ptr=fopen("question_2.txt","w");
for(int i=0;i<10;i++){
    fprintf(ptr,"%d x %d = %d \n",num , i+1 , num*(i+1));
}
fclose(ptr); 
return 0;
}