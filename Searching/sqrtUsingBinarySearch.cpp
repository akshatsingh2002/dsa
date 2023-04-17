#include<iostream>
using namespace std;
int sqrt(){
    int n;
    float ans = 0;
    cin>>n;
    int start = 1;
    int end = n/2;
    int mid = start + (end - start ) / 2;
    while(start<=end){
        if(mid*mid>n){
            end = mid - 1;
        }
        else{
            start = mid + 1 ;
        }
        mid = start + (end - start) / 2;
    }
    return end;
    
}
int main(){
    int k;
    cin>>k;
    while(k--){
        int ans = sqrt();
        cout<<ans;
    }
    return 0;
}
