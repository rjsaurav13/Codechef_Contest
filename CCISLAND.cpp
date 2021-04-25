#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tcase;
    scanf("%d",&tcase);
    while(tcase--){
        int x,y,xr,yr,D;
        scanf("%d%d%d%d%d",&x,&y,&xr,&yr,&D);
        float xm,ym;
        xm=x/xr;
        ym=y/yr;
        if(xm>=D&&ym>=D){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
}    