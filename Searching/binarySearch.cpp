#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int val)
{
    int s = arr.size();
    int l = 0;
    int r = s-1;
    int mid = l + r / 2;
    while(l<=r){
        if(arr.at(mid)==val){
            return mid;
        }
        else if(arr.at(mid)<val){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
        mid = l + r / 2;
    }
    return -1 ;
}
int main(){
    vector<int> arr;
    arr = {1,2,3,4,5,6,7,8,9};
    int ans = binarySearch(arr,6);
    if(ans!=-1){
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}