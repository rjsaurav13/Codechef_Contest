
#include<iostream>
using namespace std;
int main(){
    int tcase;
    cin>>tcase;
    for(int k=0;k<tcase;k++){
    int len,sum=0,sum1=0;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    if(len>4){
    for(int i=0;i<len/2;i++){
        for(int j=i+1;j<len;j++){
            sum1=arr[i]-arr[j];
            if(sum1<0){
                sum1=sum1*(-1);
            }

            sum=sum+sum1;
    }
    }
    }
    else{
        for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            sum1=arr[i]-arr[j];
            if(sum1<0){
                sum1=sum1*(-1);
            }

            sum=sum+sum1;


    }

        }
    }
        cout<<sum<<"\n";
    }
    return 0;
}
