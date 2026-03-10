#include<stdio.h>
int main()
{
FILE *rahul;
rahul =fopen("file.txt","r");
// char c=fgetc(rahul);
// printf("this helps to read step by step %c\n",c); // this reads only one 

printf("%c\n",fgetc(rahul));         // --------> THIS IS FOR GETC
printf("%c\n",fgetc(rahul));
printf("%c\n",fgetc(rahul));   // this ready one after another   
printf("%c\n",fgetc(rahul));      // TO USE THIS COMENT OUT THE  6TH LINE CHAR WALA
printf("%c\n",fgetc(rahul));
printf("%c\n",fgetc(rahul));



// rahul=fopen("putcdemo.txt","w");
// putc('r',rahul);                 // multi character can be used 
// fclose(rahul);                   // no need of file to exist 
return 0;
}
 