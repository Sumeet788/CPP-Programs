//Fixed Sized array
//Dynamic Sized array
//Vectors are also called dynamic sized arrays

#include <bits/stdc++.h>
using namespace std;


int search(int arr[],int x, int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;  // we are writing this because if the value is not found in that array than it will print -1
}

//using vectors 
int vecsearch(vector<int> vec, int x)
{
    auto it = find(vec.begin(),vec.end(),x);  // "auto" word automatically defines the datatype and "it" is used for iteration in vectors."it" is a pointer. if the desired array is not found than it will point to vec.end() and vec.end() is not a part of array.
    if (it != vec.end())
    {
        return it-vec.begin();
    }
    return -1;
}

int main()
{
    int arr[] = {20,30,10,100,40};
    int x = 100;
    cout<<"Searched via Fixed Sized Array: "<<search(arr,x,5)<<endl;

    //using vectors
    vector<int> vec={20,30,10,100,40};
    cout<<"Searched via Dynamic Sized Array or Vectors: "<<vecsearch(vec,x);

}