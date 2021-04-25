#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tcase;
    scanf("%d",&tcase);
    while(tcase--){
        int N,M,X,Y;
        scanf("%d%d",&N,&M);
        scanf("%d%d",&X,&Y);
        
        for(int i=0;i<N;i++){
            string marks;
            cin>>marks;
            int f=0,p=0,u=0;
            for(int i=0;i<marks.length();i++){
                if(marks[i]=='P'){
                    p++;
                }
                else if(marks[i]=='U'){
                        u++;
                    }
                else if(marks[i]=='F'){
                    f++;
                    
                }
                
                
            }
            if(p>=Y&&f>=X-1||f>=X){
                    cout<<1;
                }else{
                    cout<<0;
                }
           
            
        }
         cout<<"\n";
    }
    
}    