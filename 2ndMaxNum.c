#include <stdio.h>

int main(){
    int tcase,num1,num2,num3,i;
    scanf("%d",&tcase);
    for(i=0;i<tcase;i++){
         scanf("%d%d%d",&num1,&num2,&num3);

        if (num1>num2&&num1>num3){
            if(num2>num3){
                printf("%d\n",num2);
            }
            else{
                printf("%d\n",num3);
            }

        }
        if (num2>num1&&num2>num3){
            if(num1>num3){
                printf("%d\n",num1);
            }
            else{
                printf("%d\n",num3);
            }

        }
        if (num3>num2&&num3>num1){
            if(num1>num2){
                printf("%d\n",num1);
            }
            else{
                printf("%d\n",num2);
            }

        }

    }


	return 0;
}

