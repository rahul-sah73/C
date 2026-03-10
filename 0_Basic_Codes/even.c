#include<stdio.h>
int main()
{
	int a;
	printf("enter any number \n");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("%d is a even number\n",a);
		printf("%d",a*2);
	} 
	else{
		printf("%d is odd number\n",a);
		printf("%d",a/2);
	}
	return 0;
}
