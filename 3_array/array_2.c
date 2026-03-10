#include<stdio.h>
int main()
{
int n_stnd=3;
int m_sbj=4;

int marks[3][4];
for (int i=0;i<3;i++){
    for( int j=0;j<4;j++){
        printf("enter the marks of student %d in subjest %d \n",i+1,j+1);
        scanf("%d",&marks[i][j]);
    }
}
for (int i=0;i<3;i++){
    for( int j=0;j<4;j++){
        printf(" the marks of student %d in subjest %d is %d \n",i+1,j+1, marks[i][j]);
        
    }
}


return 0;
}