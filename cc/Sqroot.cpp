#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,temp,tcase;

    cin>>tcase;
    for(int k=0;k<tcase;k++){
        cin>>num;
        for(int i=1;i<=100;i++){
            int j=i*i;
            if(num>j-1||num==j){
                temp=i;

            }
        }
        cout<<temp<<"\n";
    }
return 0;
}
