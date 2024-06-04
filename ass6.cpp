#include <iostream>
using namespace std;

int main()
{
    int n, count=1;
    cout<<"Enter the number:- ";
    cin>>n;

    for(int i=1; i<=n ; i++)
    {
        for(int j=2; j<=i ; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=1; j<=(n*2-1)-i-n+1;j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=(n*2-1)-i-n;j++)
        {
            cout<<" ";
        }
        if(i==n) break;
        else cout<<"*";
        cout<<endl;
    }



}
































