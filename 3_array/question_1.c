// create an array of 10 number, verify using pointer arithmetic that (ptr+2)point
// to the 3rd element of the array 

#include<stdio.h>
int main()
{
int array[10]/*={1,2,3,4,5,6,7,8,9,0}*/;
int *ptr=&array[0];
ptr=ptr+2;
// for (int i = 0;i<10;i++){
//     printf("enter the value of array %d",i+1);
//     scanf("%d",&array[i]);
// }
if(ptr == &array[2]){
    printf("%d\n",array[2]);
    printf("%d\n",*ptr);
    printf(" their value are equal ");
    return 0;
}
printf("ther value are not equal");
return 0;
}