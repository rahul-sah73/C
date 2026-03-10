// // 


// #include<stdio.h>
// int chnage(int *num){
// int cnum = *num *10;
// printf("the value of number aftr multiplying with 10 is %d",cnum);
// }
// int main()
// {
// int number, cnum ;
// printf(" enter the value of number ");
// scanf(" %d",&number );
// chnage(&number);
// // printf("the value of number aftr multiplying with 10 is %d",cnum);
// return 0;
// }
   
// or 
#include<stdio.h>
int chnage(int *num){
*num = *num *10;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
      chnage(& number);
    
    printf("The number multiplied by 10 is: %d\n", number);
    
    return 0;
}