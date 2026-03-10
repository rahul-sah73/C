#include<stdio.h>
int main()
{
int a, factorial[200]={1}; 
printf("enter the value of a");
scanf(" %d",&a);
if (a==0)
{
    printf(" the faactorail of %d is 1",a);

}
else{
    for (int i=1;i<=a;i++)
    {
    factorial[200]=factorial[200]*i;
}
printf("the factrial of %d is %d",a , factorial);
}

return 0;
}