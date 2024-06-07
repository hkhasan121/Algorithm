#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int size,int l, int mid, int r)
{
    int i = l;
    int j = mid+1;
    int k = l;
    int temp[size];
    while(i<= mid && j<= r)
    {
        if(arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j  <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(int s = l; s<=r ; s++)
    {
        arr[s] = temp[s];
    }

}

void merge_sort(int *arr,int size,int l,int r)
{
    if (l<r)
    {
        int mid = (l+r) / 2;
        merge_sort(arr,size,l,mid);
        merge_sort(arr,size, mid+1,r);
        merge(arr,size,l,mid,r);
    }
}

int main()
{
    int size;
    cout<<"Enter the range of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of array: ";
    for(int i = 0; i< size; i++)
    {
        cin>> arr[i];
    }
    cout<<endl;
    cout<<"Before merge sort: ";
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    merge_sort(arr,size,0,size-1);

    cout<<"After merge short: ";
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" " ;
    }
    cout<<endl<<endl;
}
