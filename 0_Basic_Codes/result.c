#include<stdio.h>
int main ()
{
	float math ,computer , physics , chemistry , nepali , english , totall;
	printf( " enter the marks obtain in all subject \n");	
	scanf("%f%f%f%f%f%f",&math ,&computer,&physics,&chemistry ,&nepali,&english);
	totall=(math + computer+physics+chemistry+nepali+english)/6;

	 if (totall>40&&math>95&&computer>95&&physics>95&&chemistry>95&&nepali>95&& english>95)
	{
		printf("conguratulation securing first position in your final exam and your percentage is %f", totall);
		printf(" conguratulation on getting 100 % scholarship ");
	}
	   else	if ( (totall>40)&&math>33&&computer>33&&physics>33&&chemistry>33&&nepali>33&& english>33)
	{
		printf("conguratulation on passing your final examm and your percentage is %f",totall);
		
	}
	else 
	{
		printf(" your failed in your finall exam ");
	}
	
	
	return 0;
	
}
