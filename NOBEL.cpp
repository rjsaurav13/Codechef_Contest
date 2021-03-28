#include <bits/stdc++.h>

using namespace std;
int main()
{
    int tcase;
    scanf("%d",&tcase);
    while(tcase--){
        int N,M;
        
        scanf("%d%d",&M,&N);
        int arr[M];
        
        for(int i=0;i<M;i++){
            scanf("%d",&arr[i]);
        }
        std::vector<int> v(arr, arr + M);
         vector<int>::iterator ip;
  
        int count;
        sort(v.begin(), v.end());
        count = std::distance(v.begin(),std::unique(v.begin(), v.begin() + M));
    if(count<N){
        printf("Yes\n");
    }
    else{
         printf("No\n");
    }

        
    }

}