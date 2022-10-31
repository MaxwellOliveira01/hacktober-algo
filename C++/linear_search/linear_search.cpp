#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

// funtion to implement linear search
int linear_search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main(int argc, char *argv[]) {
    int n,x;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    cin>>x;
    int idx = linear_search(arr,n,x);
    if(idx==-1)
        cout<<"Element not found!!"<<endl;
    else
        cout<<"Element present at index "<<idx<<"."<<endl;
    return 0;
}
