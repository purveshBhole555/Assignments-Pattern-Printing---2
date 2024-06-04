#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    int k=n+2;

    for(int i=1 ; i<=n-1 ; i++)
    {
        for(int j=1 ;j<=i; j++)
        {
            cout<<"*";
        }
        k-=2;
        // for(int j=1 ; j<=(n-i); j++)
        // {
        //     cout<<"#";
        // }
        // for(int j=1 ; j<=n-i-1 ; j++)
        // {
        //     cout<<"#";
        // }
        for(int j=k ; j>=0; j--)
        {
            cout<<" ";
        }
        for(int j=1 ; j<=i; j++)
        {
            cout<<"*";
        }
         cout<<endl;
    }
    for(int i=1; i<=4*n-(n-2); i++)
    {
        cout<<"*";
        if (i==2*n-1) cout<<endl;
        
    }
    cout<<endl;
    for(int i=1; i<=n-1 ; i++)
    {
        for(int j=1; j<=n-i;j++)
        {
            cout<<"*";
        }
        for(int j=1 ; j<= 2*i-1; j++)
        {
            cout<<" ";
        }
        for(int j=1 ; j<=n-i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}