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
        
        for(int j=i; j<=i; j++)
        {
            if(j==1 || i==n || i==j )
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            cout<<endl;
        }
    }

    return 0;
}