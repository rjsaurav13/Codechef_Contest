#include <bits/stdc++.h>
using namespace std;
int main()
{
    int R,O,C;
    scanf("%d%d%d",&R,&O,&C);
    int ball=(20-O)*6;
    int runs=ball*6;
    int trun=runs+C;
    if(R<trun){
        printf("YES");
    }else{
        printf("NO");
    }
}