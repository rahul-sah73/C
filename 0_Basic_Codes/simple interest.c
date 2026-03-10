#include<stdio.h>
int main()
{
	int p, t, r;
	
	printf("principle is \n");
	scanf("%d",&p);
	
	printf("time is \n");
	scanf("%d",&t);
	
	printf("rate is \n");
	scanf("%d",&r);
	
	printf("simple interest is %d",(p*t*r)/100);
	return 0;
}
