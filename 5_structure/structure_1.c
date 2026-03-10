#include<stdio.h>
struct employee{   // typedef struct employee
    int code;      // if we use type def 
    float salary ; // istead of struct employee we can use emp that is writen down  before ;
    char name ;
}/*emp*/;
int main()
{
    struct employee e1;
    struct  employee *ptr;
    ptr =&e1;
   //  either write  (*ptr).code  or  ptr->code
   (*ptr).code=101;
//    ptr->code=102;
   printf("%d and \n",e1.code);


return 0;
}