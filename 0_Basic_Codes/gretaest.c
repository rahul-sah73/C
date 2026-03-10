#include<stdio.h>
#include<math.h>
int main ()
{
	int a, b, c , d;
	printf("enter any four numbers \n");
	scanf("%d %d  %d %d",&a,&b,&c,&d);
	if (a>b && a>c &&a>d){
		printf("%d is the gratest number among the four number \n",a);
		printf("the square of %f is ",pow(a,2));
	}
	else if ( b>a&&b>c&&b>d){
		printf("%d is the greatest number among the four number \n",b);
		printf("the square of %f is ",pow(b,3));
	}
		else if ( c>a&&c>b&&c>d){
		printf("%d is the greatest number among the four number \n",c);
		printf("the square of %f is ",pow(c,4));
	}
	else 
	{
		printf("%d is the greates number among all the four number \n ",d);
		printf("the double square of %f is", pow(d,4));
	}
//        ( a%2==0 ) ? printf("%d is even number  ",a)  : printf(" %d is a odd number ",a);
}
