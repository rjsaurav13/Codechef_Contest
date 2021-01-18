#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len,temp;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    sort(arr,arr+len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}
