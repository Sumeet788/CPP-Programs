#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {20,40,10,30,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr, arr+n);
    for(int x: arr)
    {
        cout<<x<<" ";
    }

    cout<<endl;
    
    sort(arr, arr+n, greater<int>());
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


