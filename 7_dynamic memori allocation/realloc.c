// realloc is used to allocate memory of new size
// ptr = realloc(ptr, new size );
//ptr =(ptr , 3*size

#include<stdio.h>
#include<stdlib.h>                 
int main()                         
{
    int *ptr;
  


ptr = (int *)malloc(6 * sizeof(int)); 
   
    for(int i=0;i<6;i++){
    
        printf("the value of %d is \n",i);
        scanf("%d",&ptr[i]);
        
    }
    for( int i=0;i<6;i++){                              
        printf("the value of %d is %d \n",i,ptr[i]);
    
        ptr = realloc(ptr, 10* sizeof(int ));

    }
    for(int i=0;i<10;i++){
    
        printf("the value of %d is \n",i);      // if we want to for 10 at same time 
        scanf("%d",&ptr[i]);
        
    }
    for( int i=0;i<10;i++){                              
        printf("the value of %d is %d \n",i,ptr[i]);
    

    }

return 0;
}
