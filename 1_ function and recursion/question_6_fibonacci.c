#include<stdio.h>
// int fibonacci( int n );

int fibonacci(int n){
    if (n==1){
        return n=0;
    }
    else if ( n==2){
        return n=1;
    }
      
     return  fibonacci(n-1)+fibonacci(n-2);  

}



int main()
{
int n;
printf(" enter he value of n ");
scanf(" %d", &n);
printf( " your %dth fibonaci series is %d", n, fibonacci(n));
return 0;
}
// #include <stdio.h>

// // Function to calculate the nth Fibonacci number using recursion
// int nthFibonacci(int n){
//     // Base case: if n is 0 or 1, return n
//     if (n <= 1){
//         return n;
//     }
//     // Recursive case: sum of the two preceding Fibonacci numbers
//     return nthFibonacci(n - 1) + nthFibonacci(n - 2);
// }

// int main(){
//     int n = 3;
//     int result = nthFibonacci(n);
//     printf("%d\n", result);
//     return 0;
// }