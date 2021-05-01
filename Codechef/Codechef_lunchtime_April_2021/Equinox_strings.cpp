// Problem Code: EQUINOX
// Question Link: https://www.codechef.com/LTIME95C/problems/EQUINOX

#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

#define ll long long int

using namespace std;

bool present(string s){
    char x = s[0];
    
    if(x == 'E' || x == 'Q' || x == 'U' || x == 'I' || x == 'N' || x == 'O' || x == 'X'){
        return true;
    }
    return false;
}

int main() {
    
    ll t;
    cin>>t;
    
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        
        ll anu = 0;
        ll sar = 0;
        
        while(n--){
            string s;
            cin>>s;
            
            if(present(s)){
                sar = sar + a;
            }
            else{
                anu = anu + b;
            }
        }
        
        if(sar > anu){
            cout<<"SARTHAK"<<endl;
        }
        else if(anu > sar){
            cout<<"ANURADHA"<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }
    
	  return 0;
}
