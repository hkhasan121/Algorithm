#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[50];
    
    
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Original Array : ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    int largest = arr[0];
    for(int i = 1 ; i<n; i++)
    {
        if(largest < arr[i])
        {
            largest = arr[i];
        }

    }
    cout<<"Largest Number of Element is : "<<largest<<endl;
}