#include<stdio.h>
#include<math.h>
// to include poe---> power function we have to add #include<math.h>
// and also we  have change %d --->%f cauz it retuns double value 
int main()
{
	int a,b;
	int r;
	printf("% the value of a is \n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("remainder is %d\n",a%b);
//	printf("the value of 4^3 is %d",4^3); this is not accepted ^ ---> not a power symble 
	printf("the value of 4 to the power of 3 is %f", pow(4,3));
	return 0;
	
}
