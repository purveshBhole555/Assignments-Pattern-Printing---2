#include <iostream>
using namespace std;

int main()
{
    int n, count=1;
    // static int  k=1 ;
    cout<<"Enter the number:- ";
    cin>>n;
    for(int i =0 ; i<2*n-1 ; i++)
    {
        cout<<(char)('A'+i);
    }
    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        int k=1;
        for(int j=1 ; j<=n-i; j++)
        {
            cout<<(char)(64+j);
            k++;
        }

        for(int j=1 ; j<=2*i-1; j++)
        {
            cout<<" ";
            k++;
        }
        count+=2;

        for(int j=1 ; j<=n-i ;j++)
        {
            cout<<(char)(k+64);
            k++;
        }

        cout<<endl;
    }
}