#include <stdio.h>

int main(void) {
    int i =0,num;
    do{
        scanf("%d",&num);
        if(num==42){
            break;
        }
        printf("%d\n",num);
    }while (num!=42);
	return 0;
}
