#include <iostream>
using namespace std;

int main()
{
    int n=4, count=1;
    // cout<<"Enter the number:- ";
    // cin>>n;
    for(int i=1 ; i<=n; i++)
    {
        for(int j=1 ; j<=n-i ; j++)
        {
            cout<<" ";
        }
        cout<<i;
        for(int j=1; j<=2*i-2;j++)
        {
            cout<<"#";
        }

        for(int j=1 ; j<=n-i ; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}