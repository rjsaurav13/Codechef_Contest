#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int nCr(int n, int r){
        if(r>n){
            return 0;
        }else{
           return fact(n)/(fact(n-r)*fact(r));
        }
    }
    int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}  