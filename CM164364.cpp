#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tcase;
    scanf("%d",&tcase);
    while(tcase--){
        int n,x,count=0;
        scanf("%d%d",&n,&x);
        vector<int> num;
        for(int i=0;i<n;i++){
            int temp;
            scanf("%d",&temp);
            num.push_back(temp);
        }
        sort(num.begin(),num.end());
        count = std::distance(num.begin(),
                          std::unique(num.begin(), num.begin() + n));
        
        int diff=n-x;
        if(n==count){
            printf("%d\n",n-x);
        }else if(diff>count){
            printf("%d\n",diff-count);
        }else{
            cout<<n-x<<"\n";
        }
        
    }

    
}    