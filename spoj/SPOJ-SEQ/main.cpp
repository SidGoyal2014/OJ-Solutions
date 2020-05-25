#include <iostream>
#include <vector>

#define ll long long int
#define mod 1000000000

using namespace std;

// Concept Used  --  MATRIX EXPONENTIATION
// Problem -- SPOJ SEQ
// URL -- https://www.spoj.com/problems/SEQ/

ll k;
vector<ll> b,c;

vector<vector<ll>> multiply(vector<vector<ll>> a,vector<vector<ll>> b){

    vector<vector<ll>> c(k,vector<ll>(k));

    for(int i=0;i<k;i++){
        for(int m=0;m<k;m++){
            for(int n=0;n<k;n++){
                c[i][m] = (c[i][m] + (a[i][n] * b[n][m])%mod)%mod;
            }
        }
    }

    return c;
}

vector<vector<ll>> pow(vector<vector<ll>> a, ll n){
    if(n==1){
        return a;
    }
    if(n&1==1){
        return multiply(a,pow(a,n-1));
    }
    vector<vector<ll>> x = pow(a,n/2);
    return multiply(x,x);
}

ll compute(ll n){

    // base case
    if(n==0){
        return 0;
    }
    if(n<=k){
        return (b[n-1]);
    }

    // Otherwise use matrix Exponentiation

    // Step 1
    // Get the value of k

    // Step 2 --f1 matrix
    vector<ll> f1(k);

    for(int i=0;i<k;i++){
        f1[i] = b[i];
    }

    // Step 3 -- Contruct the T (Transformation) matrix
    vector<vector<ll>> t(k,vector<ll>(k));

    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(i<(k-1)){
                if(j == (i+1)){
                    t[i][j] = 1;
                }
                else{
                    t[i][j] = 0;
                }
            }
            else{
                t[i][j] = c[k-(j+1)];
            }
        }
    }

    // Step 3 -- t^(n-1)
    t = pow(t,n-1);

    // step 4 -- multiply a with f1
    ll res = 0;
    for(int i=0;i<k;i++){
        res = (res + (t[0][i] * f1[i])%mod)%mod;
    }

    return res;
}

int main() {
    ll t,n;
    cin>>t;

    while(t--){
        
        cin>>k;

        for(int i=0;i<k;i++){
            ll x;
            cin>>x;
            b.push_back(x);
        }

        for(int i=0;i<k;i++){
            ll x;
            cin>>x;
            c.push_back(x);
        }
        
        cin>>n;

        cout<<compute(n)<<endl;

        b.clear();
        c.clear();
    }

    return 0;
}
