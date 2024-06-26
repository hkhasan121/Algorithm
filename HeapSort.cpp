#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int size)
{
    for(int i = 1; i<=size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

}

void heapify(int arr[],int size,int i)
{
    int largest = i;
    int leftIndex = 2*i;
    int rightIndex = 2*i + 1;

    if(leftIndex <= size && arr[leftIndex] > arr[largest])
    {
        largest = leftIndex;  
    }
    if(rightIndex <= size && arr[rightIndex] > arr[largest])
    {
        largest = rightIndex;
    }

    if(largest != i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,size,largest);
    }

}

void heapSort(int arr[],int size)
{
    
    //heap creation
    for(int i = size/2; i>0; i--)
    {
        heapify(arr,size,i);
    }
    cout<<"Create heap: ";
    print(arr,size);
    cout<<endl;

    //root to end
    int n = size;
    while(n>1)
    {
        swap(arr[n],arr[1]);
        n--;
        heapify(arr,n,1);
    }

}



int main()
{
    int arr[6] = {-1,53,54,50,52,55};
    int size = 5;
    cout<<"Array: ";
    print(arr,size);

    
    heapSort(arr,size);
    cout<<"Heap Sort: ";
    print(arr,size);
}