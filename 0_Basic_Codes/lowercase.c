#include<stdio.h>
int main ()
{
	// ascii value of a-z is 97 - 112 and A-Z is 65 to 90
	char rahul ;
	printf(" enter a charactrer ");
	scanf("%c", & rahul);
	if ( rahul >= 97 && rahul <= 112)
	{
		printf(" given character is a lowwer case charactwer");
	}
	else {
				printf(" given character is not  a lowwer case charactwer");
	}
	return 0;
}
