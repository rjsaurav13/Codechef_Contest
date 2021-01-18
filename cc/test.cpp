#include <iostream>
using namespace std;

int main() {
	int tcase;
	cin>>tcase;
	for(int i=0;i<tcase;i++){
	    int len;
	    cin>>len;
	    int arr[len];
	    for(int j=0;j<len;j++){
	        cin>>arr[j];
	    }
	    for(int k=len-1;k>=0;k--){
	        cout<<arr[k]<<" ";
	    }
	}
	return 0;
}
