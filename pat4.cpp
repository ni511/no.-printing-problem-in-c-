// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int i=1,j=1,n;
    cout<<"Enter the value of n:\n";
    cin>>n;
    while(i<=n)
    {
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}