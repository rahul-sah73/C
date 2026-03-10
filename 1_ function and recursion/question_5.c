#include<stdio.h>
int sum(int n);
int main()
{
    int n;
printf("enter the vakue of n ");
scanf("%d",&n);
printf("the sum of 1st %d natural no is %d",n,sum(n));

return 0;
}

int sum( int n){
 int son= n*(n+1)/2;
 return son;
}