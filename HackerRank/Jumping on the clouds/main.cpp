#include <iostream>

using namespace std;

int main(){
    int n,arr[100],i,count;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    i=0;
    count=0;
    while(i<(n-1)){
        if(arr[i+2]==0){
            i=i+2;
            count++;
        }
        else{
            i=i+1;
            count++;
        }
    }
    cout<<count;
    return 0;
}
