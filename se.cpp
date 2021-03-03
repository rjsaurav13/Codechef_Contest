#include <iostream>
using namespace std;
int main()
{
int num;
cin>>num;
for(int i=1; i<=num; i++)
    {
    for(int j=1; j<i; j++)
        {
            cout<<" ";
        }
    cout<<i;
    for(int j=1; j<=((num - i) * 2 - 1); j++)
        {
            cout<<" ";
        }
        if(i != num){
           cout<<i;
        }
        cout<<"\n";
    }


    for(int i=num-1; i>=1; i--)
    {

        for(int j=1; j<i; j++)
        {
            cout<<" ";
        }

        cout<<i;


        for(int j=1; j<=((num - i ) * 2 - 1); j++)
        {
            cout<<" ";
        }

        cout<<i;


         cout<<"\n";
    }


}
