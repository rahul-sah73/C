#include<stdio.h>
int main()
{
	int n, prime =1 ;
	printf("enter a number \n");
	scanf("%d",&n);
	for(int i =2; i<n;i++)
	{
		if(n%i==0)
		{
			prime=0;
			break;
		 }
	}
		if(prime==0 && n!=2)
		{
		printf(" %d isnot  a prime number ",n);
		}
		else{
		printf(" %d is  a prime no.",n);
		}
	return 0;
}

