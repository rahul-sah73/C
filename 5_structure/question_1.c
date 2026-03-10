#include<stdio.h>
typedef struct vector
{
        int x;
        int y;
}vec ;

vec vectorsum(vec v1 , vec v2)
{
    vec  result;
    result.x= v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result ;
};

int main()
{
vec v1, v2, sum ;
v1.x=65;
v1.y=45;
printf( "your vector is  %di + %dj\n",v1.x,v1.y);
v2.y=23;
v2.y=26;
printf( "your vector is  %di + %dj\n",v2.x,v2.y);

sum= vectorsum(v1,v2);
printf("your vector sum is %di + %dj",sum.x, sum.y);


return 0;

}