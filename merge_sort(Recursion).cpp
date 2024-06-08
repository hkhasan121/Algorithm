#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int size,int s,int e)
{
    int mid = (s+e) / 2;

    int size1 = mid - s +1;
    int size2 = e - mid;

    int first[size1];
    int second[size2];

    int k = s;

    // copy
    for(int i = 0; i<size1; i++)
    {
        first[i] = arr[k];
        k++;
    }

    k = mid+1;
    for(int i = 0; i<size2; i++)
    {
        second[i] = arr[k];
        k++;
    }

    //merge 2 sorted array

    int i = 0;
    int j = 0;
     k =s;

    while(i <size1 && j<size2)
    {
        if(first[i] < second[j])
        {
            arr[k] = first[i];
            i++;
            k++;

        }

        else
        {
            arr[k] = second[j];
            j++;
            k++;
        }
    }

    while(i < size1)
    {
         arr[k] = first[i];
            i++;
            k++;
    }

    while(j  < size2)
    {
        arr[k] = second[j];
            j++;
            k++;
    }



}

void mergeSort(int *arr,int size, int s, int e)
{
    if(s >= e)
    {
        return;
    }

    int mid = (s+e)/2;

    mergeSort(arr,size,s,mid);
    mergeSort(arr,size,mid+1,e);

    merge(arr,size,s,e);
}

int main()
{
    int size = 12;
    int arr[size] = {25,65,12,800,52,14,54,1,2,0,4,6};
    cout<<"Before merge sort: ";
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    mergeSort(arr,size,0,size-1);
    cout<<"After merge sort: ";
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
