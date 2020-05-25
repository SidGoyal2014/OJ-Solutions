#include <iostream>
using namespace std;
int main(){
    long long int rem,t;
    cin>>t;
    rem = 3;
    while(t > rem){
        t = t-rem;
        rem *= 2;
    }
    cout<<(rem-t+1);
    return 0;
}
