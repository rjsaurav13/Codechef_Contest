#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tcase;
    cin>>tcase;
    for(int i=0;i<tcase;i++){
        string num;
        char ch1,ch2;
        cin>>num;
        ch1=num[0];
        ch2=num[num.size()-1];
        ch1 = ch1 - '0';
        ch2 = ch2 - '0';
        cout<<ch1+ch2<<"\n";

    }
return 0;
}
