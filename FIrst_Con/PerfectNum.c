#include <stdio.h>

int main(void) {
	short tcase;
	int num,i=0;
	scanf("%d",&tcase);
	while(i<tcase){
	    int sum=0,j=1;
	    scanf("%d",&num);
	    while(j<num){
	        if(num%j==0){
	            sum+=j;
	        }
	        j++;
	    }
	       if(sum!=num)
	           printf("NO\n");
	       else
	           printf("YES\n");
	   i++;
	}
	return 0;
}