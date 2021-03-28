#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tcase;
    scanf("%d",&tcase);
    while(tcase--){
        int N,K;
        scanf("%d%d",&N,&K);
        if(N%K==0){
            printf("%d %d\n",N/K,K);
        }
        else{
            printf("%d %d\n",(N/K)+1,N%K);   
        }
    }

}