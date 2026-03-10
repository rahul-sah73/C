// There is an ATM machine. Initially, it contains a total of k units of money. N people (numbered 1 through N) want to withdraw money; for each valid i, the i-th person wants to withdraw Aith  units of money.

// The people come in and try to withdraw money one by one, in the increasing order of their indices. Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else.

// For each person, determine whether they will get the required amount of money or not.


#include <stdio.h>

int main() {
	int t ;
	scanf("%d",&t);
	while(t--){
	    
	    int k_units  , n_people ;
	    scanf(" %d %d ",&n_people ,&k_units);
	    int witdraw_money[n_people];
	    
	    for(int i = 0 ; i < n_people ; i++){
	        scanf("%d",&witdraw_money[i]);
	     
	     if(witdraw_money[i] <= k_units){
	         printf("1");
              k_units = k_units - witdraw_money[i]; 
	     }
	     else{
	         printf("0");
	     }
	        
	    }
	    printf("\n");
	    
	    
	    
	}
return 0;
}

