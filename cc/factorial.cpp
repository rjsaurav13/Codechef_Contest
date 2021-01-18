#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tcase;
    cin>>tcase;
    for(int i=0;i<tcase;i++){
        int num,fact=1;
        cin>>num;
        if(num==1&&num==0){
            cout<<"1\n";
    }
    else
        for(int j=1;j<=num;++j){
            fact=fact*j;
        }

        cout<<fact<<"\n";
    }

	return 0;
}
