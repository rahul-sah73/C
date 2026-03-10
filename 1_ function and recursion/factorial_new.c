#include <stdio.h>

int main() {
	int t;
	int  n ;
	scanf("%d",&t);
	while(t--){
	    long long int fac =1;
	    scanf("%d",&n);
	    if (  n== 0){
	        printf("1\n");
	    }
	    else {
	        
	    for (int i=1;i<=n;i++){
	        fac = fac *i ;
	    }
	    printf("%lld\n",fac);
	    }
	}
return 0;
}


