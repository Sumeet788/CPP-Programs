#include <iostream>
using namespace std;

int insert(int arr[],int n,int capacity,int pos,int x )
{
    if(n==capacity)
    {
        return n;    
    }
    for(int i=n-1; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
    return n+1;
}


int main()
{
    int arr[5];
    int capacity=5;
    int n=3;
    arr[0]=5;
    arr[1]=10;
    arr[2]=20;

    cout<<"Before Insert: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x=6;
    int pos=1;
    n=insert(arr,n,capacity,pos,x);
    cout<<"After Insert: ";
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        
        cout<<arr[i]<<" ";
    }
    return 0;
}