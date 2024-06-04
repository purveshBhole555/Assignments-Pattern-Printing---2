#include <iostream>
using namespace std;

int main()
{
    int n ,a=1;
    cout << "Enter the number ";
    cin >> n;

    for(int i=1 ; i<=n-1 ; i++)
    {
        for(int j =1 ; j<=n-i;j++)
        {
            cout<<" ";
        }

        for(int k=1 ; k<=a ; k++)
        {
            cout<<(char)(k+64);
        }
        a+=2;
        cout<<endl;
    }
}