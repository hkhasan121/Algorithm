#include<bits/stdc++.h>
using namespace std;


void print(int *arr, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void heapify(int *arr,int n,int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if(right < n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if(largest != i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapSort(int *arr,int n)
{
    for(int i = (n-1)/2 ; i >= 0; i--)
    {
        heapify(arr,n,i);//this will create heap
    }
    cout<<"Create max heap: ";
    print(arr,n);

     int size = n;
    while(size-1 > 0)
    {
        swap(arr[size-1],arr[0]);
        size --;
        heapify(arr,size,0);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array: ";
    print(arr,n);
    heapSort(arr,n);
    cout<<"Array after Heap Sort: ";
    print(arr,n);




}
