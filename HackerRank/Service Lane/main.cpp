#include <iostream>

using namespace std;

int main(){
    int n,t,a[100000],i,j,k,l,m;
    cin>>n>>t;

    for(k=0;k<n;k++){
        cin>>a[k];
    }

    for(l=0;l<t;l++){
        cin>>i>>j;

        m=a[i];
        for(k=i;k<=j;k++){
            if(m>a[k]){
                m=a[k];
            }
        }
        cout<<m<<"\n";
    }
    return 0;
}
