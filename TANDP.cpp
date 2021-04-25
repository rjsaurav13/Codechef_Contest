#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tcase;
    scanf("%d",&tcase);
    while(tcase--){
        int N,M,x,y,a,b;
        scanf("%d%d",&N,&M);
        scanf("%d%d",&x,&y);
        scanf("%d%d",&a,&b);
        int x1=N-x;
        int y1=N-y;
        int a1=a-x;
        int b1=b-y;
        if(a1<0){
            a1=a1*-1;
        }
        if(b1<0){
            b1=b1*-1;
        }
        if(a1+b1>x1+y1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
}       /*if(x1+y1<a1+b1){
            printf("YES");
        }else if(x1+y1==a1+b1){
            printf("YES");
        }
        else{
            printf("NO");
        }
        cout<<"\n";
        */