
#include <bits/stdc++.h>
using namespace std;
int main()
{
    	int tcase;
		cin>>tcase;
		for(int j=0;j<tcase;j++){
		    string num;
		    cin>>num;
		    int count=0;
		    for(int i=0;i<num.length();i++){
		        if(num[i]=='1'&&(num[i+1]!=num[i])){
		            count++;
		        }

		    }
		    cout<<count<<"\n";
		}
}
