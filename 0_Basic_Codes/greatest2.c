#include<stdio.h>
#include<math.h>
int main()
{
	int a , b;
	printf("enter first  number\n ");
	scanf("%d",&a);
	
	printf("enter second  number \n");
	scanf("%d",&b);
	
	if(a>b){
		printf(" %d is the greatest number\n ",a);
		printf(" the square of number is %f " , pow(a,2));
	}
	else{
		printf( " %d is the gratest number \n ",b);
		printf("the square of number is %f", pow(b,2));
	}
	return 0;

}
