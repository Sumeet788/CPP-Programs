#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec={20,40,10,30,50};
      
    for(int x: vec)
    {
        cout<<x<<" ";
    }

    cout<<endl;
    
    sort(vec.begin(), vec.end(), greater<int>());
    for(int x: vec)
    {
        cout<<x<<" ";
    }
    return 0;
}


