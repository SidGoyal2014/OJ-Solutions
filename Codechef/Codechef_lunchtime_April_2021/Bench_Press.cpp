// Problem Code: BENCHP
// Question Link: https://www.codechef.com/LTIME95C/problems/BENCHP

#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>

#define ll long long int

using namespace std;

bool solve(){
    map<ll,ll> loads;
        
    ll n,w,wr;
    cin>>n>>w>>wr;
    
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        loads[arr[i]]++;
    }
    
    if(wr >= w){
        return true;
    }
    
    ll extra_load = 0;
    
    for(auto x:loads){
        if(x.second % 2 != 0){
            extra_load = extra_load + (x.first * (x.second - 1));
        }
        else{
            extra_load = extra_load + (x.first * x.second);
        }
    }
    
    if((wr + extra_load) >= w){
        return true;
    }
    return false;
}

int main() {
    
    ll t;
    cin>>t;
    
    while(t--){
        
        bool ans = solve();
        
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
