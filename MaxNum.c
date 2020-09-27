#include <stdio.h>

int main(void) {
    int tcase,num1,num2,num3,i;
    scanf("%d",&tcase);
    for(i=0;i<tcase;i++){
         scanf("%d%d%d",&num1,&num2,&num3);

        if (num1 > num2){
            if (num1 > num3){
                printf("%d\n",num1);
            }
            else{
                printf("%d\n",num3);
            }
        }
        else if (num2 > num3)
            printf("%d\n",num2);
        else
            printf("%d\n",num3);
    }
	return 0;
}

