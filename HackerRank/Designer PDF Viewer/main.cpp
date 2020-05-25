// This is the Hackerrank solution of "Designer PDF Viewer" in Problem Solving.
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    short int i,arr[50],c1[10]={0},n=0,max;
    char c[11];


    for(i=97;i<=122;i++){
        cin>>arr[i];
    }

    cin>>c;
    i=0;
    while(c[i]!='\0'){
        c1[i]=arr[int(c[i])];
        n++;
        i++;
    }

    max=c1[0];
    for(i=0;i<n;i++){
        if(max<c1[i]){
            max=c1[i];
        }
    }
    cout<<(max*n);
    return 0;
}
