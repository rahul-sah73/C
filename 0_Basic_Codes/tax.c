#include<stdio.h>
int main ()
{
	float income , tax ;
	printf(" what is your monthly income  \n");
	scanf(" %f",& income );
	if ( income> 1000000 )
	{
		tax= tax+ 0.30*(income-1000000 ) ;
		printf( " your net tax of this year is %f", tax);
	}
	else if ( income>500000&&income<= 1000000 )
	{
		tax= tax +0.20*(income-500000 ) ;
		printf( " your net tax of this year is %f", tax);
	}
	else if ( income>=250000&&income<=500000)
	{
		tax= tax+ 0.05*(income-250000 );
	printf( " your net tax of this year is %f", tax);
	}
	else
	{
		printf(" you do not need to pay tax ... beacuse you are poor ");
	}
	
	return 0;
}
