#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tcase;
    cin>>tcase;
    for(int i=0;i<tcase;i++){
        int num,count=0;
        cin>>num;
        while(num>0){
            int temp;
            temp=num%10;
            if(temp==4){
                count++;
            }
            num=num/10;
        }
        cout<<count<<"\n";

    }

return 0;
}
