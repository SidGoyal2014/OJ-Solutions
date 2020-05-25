#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define ll long long int

using namespace std;

int main() {
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        double sum = 0;

        for(int i=0;i<n;i++){
            sum = sum + (double(n)/(double(n)-double(i)));
        }

        printf("%.2lf", sum);
        cout<<endl; 
    }
    return 0;
}
