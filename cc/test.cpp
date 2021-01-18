#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
        int num1,num2=0,rem;
        cin>>num1;
        while(num1!=0){

            rem=num1%10;
            num2=num2*10+rem;
            num1=num1/10;
        }
        cout<<num2<<"\n";

return 0;
}

