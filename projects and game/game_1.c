#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int swg(char you , char comp ){
if ( you  == comp){
    printf(" its a draw ");
}

else if (you =='w' && comp=='s'){
    printf("opps computer wins and you lose \n");
}

else if (you =='s' && comp=='g'){
    printf("opps computer wins and you lose \n");
}

else if (you =='g' && comp=='w'){
    printf("opps computer wins and you lose \n");
}

else if (you =='s' && comp=='w'){
    printf("congratulation you won the game  \n");
}

else if (you =='w' && comp=='g'){
    printf("congratulation you won the game \n ");
}

else {
    printf("congratulation you won the game  \n");
}

}
int main()
{
char you, comp , number ;
 srand(time(0));
	 number = rand()%100; 
     if (number <=33 ){
         comp='s';

     }
     else if (number >33 && number<=66){
        comp='w';
     }
     else{
        comp='g';
     }
printf(" your random number is %d\n",number);
printf("enter s for snake , w for water and g for gun  \n");

scanf("%c",&you);

int result = swg(you , comp );

printf(" you chose %c and computer chose %c ", you , comp ); 

return 0;
}