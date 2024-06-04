#include <iostream>
using namespace std;

int main()
{
    int n= 5;

    for(int i =1 ; i<=n; i++)
    {
        for(int j=1 ; j<=n-i+1; j++)
        {
            cout<<" ";
        }
        int t=2*i-1;
        for(int j=1 ; j<= t; j++)
        {
            if(j==1 || j==t || j==t/2+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
 
    }
    for(int i=1 ;i<= 2*n+1 ; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i =n ; i>=1; i--)
    {
        for(int j=n-i+1 ; j>=1; j--)
        {
            cout<<" ";
        }
        int t=2*i-1;
        for(int j=t ; j>= 1; j--)
        {
            if(j==1 || j==t || j==t/2+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
 
    }
}