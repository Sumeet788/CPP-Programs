#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How much to print: ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int k=n-1; k>=i; k--)
        {
            cout<<" ";
        }

        for(int j=1; j<=2*i-1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
}