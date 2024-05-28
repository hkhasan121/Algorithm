#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[1000];
    cin>>n;
    cout<<endl;
    for(int i = 0; i<n; i++)         //getting input frm user
    {
        cin>>arr[i];

    }
    cout<<endl;

    cout<<"Array: ";
    for(int i = 0; i<n; i++)      //print the array
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    int largest ;
    int second;
    if(arr[0]>arr[1])
    {
        largest = arr[0];
        second = arr[1];
    }
    else{
        largest = arr[1];
        second = arr[0];
    }


    for(int i = 2; i<n; i++)   //find the largest and second largest
    {
        if(largest < arr[i])
        {
            second = largest;
            largest = arr[i];
        }
        else if(second < arr[i] && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    cout<<"The second largest number of the array is : "<<second<<endl;


}