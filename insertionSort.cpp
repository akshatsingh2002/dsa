#include<iostream>
#include<algorithm>
using namespace std;
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>=0;j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    
}
