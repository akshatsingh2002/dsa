#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int val)
{
    int s = arr.size();
    int l = 0;
    int r = s-1;
    int mid = l + r / 2;
    while (l<=r)
    {
        if(val == arr.at(mid)){
            return mid;
        }
        else if(val < arr.at(mid)){
            r = mid - 1;
        }
        else 
        {
            l = mid + 1;
        }
        mid = (l + r) / 2;
    }
    
    return -1 ;
}
int main(){
    vector<int> arr;
    arr = {1,2,3,4,5,6,7,8,9};
    int search = 0;
    cin>>search;
    int ans = binarySearch(arr,search);
    if(ans!=-1){
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}