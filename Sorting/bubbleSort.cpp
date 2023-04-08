#include<iostream>
#include<algorithm>
using namespace std;
void bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[10] = { 22,43,13,43,123,543,-123,32,1,10};
    bubble(arr,10);
    return 0;
}
