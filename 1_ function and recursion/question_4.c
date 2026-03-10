#include<stdio.h>
// void pattern(int n);
void pattern(int n ){
    if (n==1){
        printf("*\n");
        return ;
    }
    else
    {
      pattern(n-1);
       for(int i = 0; i < (2*n-1);i++) 
       {
       printf("*");
       }
    }
    printf("\n"); 
   
}
int main()
{
int n;
printf(" enter the value of n for series ");
scanf("%d",&n);
pattern(n);
return 0;
}
