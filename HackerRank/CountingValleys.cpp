// Problem Name: Counting Valleys
// Problem Link: https://www.hackerrank.com/challenges/counting-valleys/problem

///////////// SOLUTION ///////////////

#include <iostream>
using namespace std;
int main(){
    int n,i,arr[1000000];
    char c[1000000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>c[i];
        if(c[i]=='U'){
            arr[i]=1;
        }
        else{
            arr[i]=-1;
        }
        
    }

    int first,sum=0,count=0;
    first=arr[0];
    for(i=0;i<n;i++){
        sum=sum+arr[i];
        if((sum==0)&&(first==-1)){
            count++;
            first = arr[i+1];
        }
        else if((sum==0)&&(first==1)){
            first = arr[i+1];
        }
    }
    cout<<count;
    return 0;
}
