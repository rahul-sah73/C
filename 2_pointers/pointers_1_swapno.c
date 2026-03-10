#include<stdio.h>
// int  swap(int *a , int *b );
int  swap(int *a , int *b){
    int swp;
    swp = *a;
    *a=*b;
    *b= swp;
}
int main()
{
int  x=4 , y=5;
printf(" the valuw of x and y  before swaping is %d  and %d\n ", x,y );
swap(&x,&y);
printf(" the valuw of x and y after swaping is %d  and %d\n ", x,y );
return 0;
}
