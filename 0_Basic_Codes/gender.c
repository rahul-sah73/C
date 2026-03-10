#include<stdio.h>
int main()
{
	char c;
	 scanf("%C",&c);
	 if (c == 'F'|| c == 'f'){
	 	printf("your gender  is female "); 	
	 }
	 else if (c=='m'||c=='M' ) {
	 	printf(" your gender is male");
	 }
	 else if (c=='o'||c=='C'){
	 	printf(" your gender is others ");
	 }
	 else{
	 	printf(" please put corect info");
	 }
	 return 0;
}
