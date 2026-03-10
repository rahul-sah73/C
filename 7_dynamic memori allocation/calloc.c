//  calloc me memory me space creat ekarne k sath sath default (0) vaalue place kar deta  hai


#include<stdio.h>           // calloc(kitne , of what )
#include<stdlib.h>          // malloc (kitne * of what )
int main()
{
    int *ptr;
ptr = (int *)calloc(6 , sizeof(int)); 
    // chararcter k liye char *
    for(int i=0;i<6;i++){
        printf("the value of %d is \n",i); // -----> if we dont take value it will 0 to every one
        scanf("%d",&ptr[i]);
        
}
    for( int i=0;i<6;i++){                              // ----> we can use it just like array 
        printf("the value of %d is %d \n",i,ptr[i]);
    

    }

return 0;
}