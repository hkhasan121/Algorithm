#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insertion(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;
        while(index > 1)
        {
            int parent = index / 2;

            if(arr[parent] < arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }

    }
    void deleteFromHeap()
    {
        if(size == 0)
        {
            return;
            cout<<"Nothing to delete"<<endl;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while(i<size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            
            if(leftIndex < size && arr[i] < arr[leftIndex] && arr[leftIndex] > arr[rightIndex])
            {
                swap(arr[leftIndex],arr[i]);
                i = leftIndex;
            }

             else if(rightIndex < size && arr[i] < arr[rightIndex] && arr[rightIndex] > arr[leftIndex])
            {
                swap(arr[rightIndex],arr[i]);
                i = rightIndex;
            }
            else{
                return;
            }
            
        }

    }

    void print()
    {
        for(int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main()
{
    Heap h;
    h.insertion(50);
    h.insertion(55);
    h.insertion(54);
    h.insertion(52);
    h.insertion(60);
    h.insertion(70);
    cout<<"Max Heap: ";
    h.print();
    h.deleteFromHeap();
    h.print();
}