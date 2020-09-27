#include <stdio.h>

int main() {
    int tcase, num,i ;
    scanf("%d",&tcase);
    for(i=0;i<tcase;i++){
        int sq=0;
        scanf("%d",&num);
        sq=num*num;
        printf("%d\n",sq);
    }
	return 0;
}

