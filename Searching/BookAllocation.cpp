#include<iostream>
using namespace std;
void bookAllocate(){
    int n,m; //n = days , m = chapters
    cin>>n>>m;
    int arr[m];
    int sum = 0;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        sum+=arr[i];

    }
    int max = 0;
    int localsum = 0;
    for(int i=0;i<n;i++){
        localsum+=arr[i];
        if(localsum>n/sum){
            localsum = arr[i];
        }
        if(max<localsum){
            max = localsum;
        }
    }
    if(max<arr[n-1]){
        max = arr[n-1];
    }
    cout<<max;

}
int main(){
    int k;
    cin>>k;
    while(k--){
        bookAllocate();
    }
    return 0;
}