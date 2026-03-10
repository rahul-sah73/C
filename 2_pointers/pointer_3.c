// #include<stdio.h>
// int main()
// {
// int a=34;         erong pointer
// int *ptr = &a;
// printf("%d",ptr);
// return 0;
// }
#include<stdio.h>
int main()
{
int a=34, *ptr, **ptr_ptr;        // corect way 
ptr=&a;
ptr_ptr=&ptr;
printf("%d",**ptr_ptr);     // to print pointer wala is use 
return 0;
}