#include<stdio.h>
float force( float m , float g );
int main()
{
float  m , g= 9.8;
printf(" enter the mass ");
scanf(" %f", &m);
printf(" the force of attraction is %f ", force( m , g ));
return 0;   // after % ( %.__) if we write 0 ,1 ,2 in place of ___ we can get that no. of zeros after . 
}

float force( float m , float g ){
    float attraction;
    attraction =  m * g;
    return attraction; 
}

// #include<stdio.h>
// int main()
// {
// int a=3;
// printf("%d,%d",a,a++);
// return 0;
// }