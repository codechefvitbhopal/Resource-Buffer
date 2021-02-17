#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    
    int original_Sum=0;
    int new_Sum=0;
    for(int i=1;i<=n;i++)
    {
        original_Sum += i;
    }
    for(int i=0;i<n-1;i++)
    {
        new_Sum += arr[i];
    }
    
    cout<<original_Sum-new_Sum<<endl;

    
    return 0;
}
