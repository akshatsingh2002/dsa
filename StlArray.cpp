#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a = {1,2,3,4};
    cout<<a.size()<<endl;
    cout<<a.at(1)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
    return 0;
}
