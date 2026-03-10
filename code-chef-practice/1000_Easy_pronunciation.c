// Easy Pronunciation
// Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to      pronounce.

// We say that a word is hard to pronounce if it contains 
// 4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

// You are given a string  S consisting of 
// N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

// For the purposes of this problem, the vowels are the characters  { a , e , i , o , u }

// {a,e,i,o,u} and the consonants are the other  21 characters.


#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    char a[ n + 1];
	    scanf("%s",a);
	    int count  = 0;
	    int hard = 0;
	    for(int i= 0 ;i <n ;i++){
	        if(a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u'){
	            count++;
	        if(count >= 4){
	            hard = 1;
	            break ;
	            }
	        
	        }
	    else{
	        count = 0 ;
	    }
	    
	    }
	    
	    if(hard == 1){
	        printf("NO\n");
	    }
	    else {
	        printf("YES\n");
	    }
	    
	}
	
return 0;
}
