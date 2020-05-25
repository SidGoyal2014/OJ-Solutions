#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a[100000],b[100000],i,j,k,l,n,m,c[100000];
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>c[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            b[j]=abs(i-c[j]);
        }
        k=b[0];
        for(j=0;j<m;j++){
            if(k>b[j]){
                k=b[j];
            }
        }
        a[i]=k;
    }
    l=a[0];
    for(i=0;i<n;i++){
        if(l<a[i]){
            l=a[i];
        }
    }
    cout<<l;
    return 0;
}
