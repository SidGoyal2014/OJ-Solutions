// Array Rotation
// Question Link: https://www.codechef.com/LTIME95C/problems/ARRROT

#include <iostream>

#define ll long long int

using namespace std;

ll mod = 1000000007;

int main() {
    ll n;
    cin>>n;
    
    ll arr[n];
    ll sum = 0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum = (sum + arr[i] + mod) % mod;
    }
    
    sum = sum % mod;
    
    ll q;
    cin>>q;
    
    ll i = 2;
    while(q--){
        ll a;
        cin>>a;
        
        sum = sum * 2;
        sum = sum % mod;
        
        cout<<sum<<endl;
    }
    
	return 0;
}
