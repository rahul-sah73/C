// malloc  me memory me space create kar deta hai



#include<stdio.h>
#include<stdlib.h>                 // calloc(kitna , of what )
int main()                         // malloc (kitna * of what )
{
    int *ptr;
// printf("the size of int in my pc is %d\n",sizeof(int));
// printf("the size of float in my pc is %d\n",sizeof(float));
// printf("the size of char  in my pc is %d\n",sizeof(char ));
ptr = (int *)malloc(6 * sizeof(int)); // malloc void poiter return karta hai 
    // chararcter k liye char *
    for(int i=0;i<6;i++){
        printf("the value of %d is \n",i);
        scanf("%d",&ptr[i]);
        
    }
    for( int i=0;i<6;i++){                              // ----> we can use it just like array 
        printf("the value of %d is %d \n",i,ptr[i]);
    

    }

return 0;
}