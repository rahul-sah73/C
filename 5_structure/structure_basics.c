#include<stdio.h>
typedef struct employee{   // typedef is used to crate shortcut for struct employee
    int id ;
    int phoneno;          // the shortcut name must be written end  before ";"
    char name[20];
} emp ;  //---> shortcut name 
int main()
{
emp e[3];
 for(int i=0;i<3;i++ ){

    printf("enter the details of employee %d\n",i+1);
scanf("%d%d%s",&e[i].id,&e[i].phoneno, e[i].name );
 
}   

 for(int i=0;i<3;i++){

    printf("employee details \n");
    printf("the id , phone no  and name of emplayee %d is %d , %d, %s  \n",i+1,e[i].id,e[i].phoneno, e[i].name );

}


return 0;
}