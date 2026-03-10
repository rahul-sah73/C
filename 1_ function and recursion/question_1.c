#include<stdio.h>
float average( float a, float b , float c);

int main()
{
int a, b, c;
printf("enter yhe value of a , b and c respectively ");
scanf("%d%d%d", &a,&b,&c);
printf("the average of 3 number is %f",average(a, b ,c));
return 0;
}
  // ( int a, int b, intc )---> no 
  // ( float a , float b , float c )---> yes

float average(float a, float b, float c ){ 
    float avg;
    avg=(a+b+c)/3;  // here float is used to give result in point 
    return avg ;         // if we dont use float it will remove the numbers after (.)---> when there is int 
                   // use float intsed of int 
}