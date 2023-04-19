#include <iostream>
using namespace std;
void charge(){
    long long n;
    long long step=0;
    cin>>n;
    while(n!=50){
        if(n<50){
            n = n + 2;
            step++;
        }
        else{
            n = n - 3 ;
             step++;
        }
    }
    cout<<step<<endl;
}
int main() {
    long long t;
    cin>>t;
    while(t--){
        charge();
    }
	return 0;
}

