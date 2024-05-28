#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int combination = 0;
    cout<<"Enter your numbers: ";
    cin>>n;

    int arr[50];

    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array : ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int i = 0; i<n-2; i++)
    {
        for(int j = i+1; j<n-1; j++)
        {
            for(int k = j+1; k<n; k++)
            {
                if(arr[i] + arr[j] +arr[k] == 0)
                {
                    combination ++;
                }
            }
        }
    }
    cout<<"Total possible combination is : "; 
    cout<<combination;
}