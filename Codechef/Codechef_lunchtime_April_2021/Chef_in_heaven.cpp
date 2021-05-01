// Problem Code: CCHEAVEN
// Question Link: https://www.codechef.com/LTIME95C/problems/CCHEAVEN

#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

#define ll long long int

using namespace std;

bool solve(string s,ll n){
    
    int till_1 = 0;
    int till_0 = 0;
    
    for(auto x:s){
        if(x == '1'){
            till_1++;
        }
        else{
            till_0++;
        }
        
        if(till_1 >= till_0){
            return true;
        }
    }
    
    if(till_1 >= till_0){
        return true;
    }
    
    return false;
}

int main() {
  ll t;
  cin>>t;

  while(t--){

      ll n;
      cin>>n;

      string s;
      cin>>s;

      bool ans = solve(s,n);

      if(ans){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
  }
	return 0;
}
