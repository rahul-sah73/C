#include<stdio.h>
float farenheit(float c , float f);

int main()
{
float c ,f ;
printf(" enter the value of celcius ");
scanf("%f",&c);
;
printf(" your  celcius is equal to %f farenheit",farenheit(c , f));
return 0;
}
float farenheit(float c , float f){
    float faren;
    faren= 32+ (c *9/5 );
    return faren ;

}