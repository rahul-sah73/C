#include<stdio.h>
void  morning();
void  evening();
void  night();
int main()
{
    morning();
    evening();             // insted of calling all the function we can call only one function              
     night();                        // and other functin inside of it  for example 
                               // we can just call morning her     morning();

return 0;
}                                // change of setting is downward

void morning(){
    printf("Ohayōgozaimasu\n");       // after printf add  evening(); and night();
                                        // result we be same as previous 
}

void evening(){
   printf("Konbanwa, hanī\n"); 
}

void night(){
   printf("Oyasuminasai, dan'na-sama\n"); 
}