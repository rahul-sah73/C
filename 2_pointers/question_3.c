// #include<stdio.h>
// int sumavg(int a, int b){
//     int sum= a+b;
//     float  avg =(float) (a+b)/2;
//     printf(" the value of sum is %d" ,sum);
//     printf("the value of av is %f ", avg);

// }
// int main()
// {
// int i , j ;
// printf(" enter the value of i an j \n");
// scanf("%d%d",&i,&j);
// sumavg(i , j );
// return 0;
// }

#include<stdio.h>
int sumavg(int a, int b, int *sum , float *avg){
*sum = a+b;
*avg =  (float) *sum / 2;  // here float in bracket is used bcz sum in=s int and nymbers are int and 2 is int so 
// result will be int to make it float  we used it 
}
 int main (){
 int  i , j ,sum ;
 float avg ;
 printf(" enter the value of i and j \n");
 scanf("%d%d",&i,&j);
sumavg( i , j, &sum , &avg );
printf("the sum of i and j is %d\n",sum );
printf("the avg of i and j is %f\n ", avg );
 return 0;
 }


