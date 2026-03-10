// free()  --> this finction is used to dellocate the memory 
// free(ptr);


#include<stdio.h>
#include<stdlib.h>                 
int main()                         
{
    int *ptr;
    int *ptr2;


ptr = (int *)malloc(6 * sizeof(int)); 
   
    for(int i=0;i<600;i++){
        ptr2= (int *)malloc(600000 * sizeof(int ));
        printf("the value of %d is \n",i);
        scanf("%d",&ptr[i]);
        free(ptr2);
    }
    for( int i=0;i<6;i++){                              
        printf("the value of %d is %d \n",i,ptr[i]);
    

    }

return 0;
}

// to see how it works see task manager 1st comment out thefree function then the storage of this file wil go on 
// increasing and now comment off the free function now the storage will not increase