#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How much to print: ";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    

    return 0;
}