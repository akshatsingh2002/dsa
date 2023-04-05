#include <iostream>
using namespace std;
int findPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[0])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}
int rotated(int arr[], int size, int k)
{
    int start = 0 ;
    int end = size - 1;
    int pivot = findPivot(arr, size);
    if(pivot == size - 1 && arr[pivot]>arr[0]){
    start = 0;
    end = size - 1;
    }
    else{
        if(k>arr[size - 1]){
            start = 0;
            end = pivot - 1;
        }
        else {
            start = pivot;
            end = size - 1;
        }
    }
    int mid = start + (end - start) / 2;
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        else if(k>arr[mid]){
            start = mid + 1;
        }
        else {
        end = mid - 1;
        }

        mid = start +(end - start ) / 2;
    }

    return - 1;
}

int main()
{
    int arr[4] = {2,4,8,1};
    // int ans = rotated(arr,4, 1);
    // cout<<ans;
     return 0;
}