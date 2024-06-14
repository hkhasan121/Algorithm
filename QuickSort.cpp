#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int s,int e)
{
    int pivot = arr[s];
    int cnt = 0;

    for(int i = s+1; i <= e; i++)
    {
        if(arr[i] <= pivot)
        {
            cnt = cnt + 1;
        }
    }

    int pivotIndex = s + cnt;

    int temp = arr [pivotIndex];
    arr [pivotIndex] = arr[s];
    arr[s] = temp;

    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

        

    }

    return pivotIndex;


}

void quickSort(int *arr,int size,int s, int e)
{
    if(s >= e)
    {
        return;
    }

     int p = partition(arr,s,e);
     quickSort(arr,size,s,p-1);
     quickSort(arr,size,p+1,e);
}

int main()
{
    int size = 6;
    int arr[size] = {50,45,30,5,-58,8};
    
    cout<<"Array : ";
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    quickSort(arr,size,0 , size-1);

    cout<<"Array after quick sort : ";
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}