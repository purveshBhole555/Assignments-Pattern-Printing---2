#include <iostream>
using namespace std;

int main()
{
    int n, count=1;
    // static int  k=1 ;
    cout<<"Enter the number:- ";
    cin>>n;

    for(int i =1 ; i<= n ;i++)
    {
        cout<<i;
    }
    for(int i =n-1 ;i>0 ; i-- )
    {
        cout<<i;
    }
    cout<<endl;

    for(int i =1 ; i<=n-1 ; i++)
    {
        for(int j=1; j<=n-i ; j++)
        {
            cout<<j;
        }

        for(int j=1; j<=count ; j++)
        {
            cout<<" ";
           
        }
        count+=2;

        for(int j=n-i ; j>=1 ; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}