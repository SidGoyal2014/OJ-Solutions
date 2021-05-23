// Problem Name: Cavity Map
// Problem Link: https://www.hackerrank.com/challenges/cavity-map/problem

///////////////// SOLUTION /////////////////

#include<iostream>
using namespace std;
#define CONDITION_1 a[i][j] > a[i-1][j] && a[i][j] > a[i][j-1]
#define CONDITION_2 a[i][j] > a[i][j+1] && a[i][j] > a[i+1][j]
int main(){
    int n,i,j;
    char a[1000][1000];
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i!=1)&&(i!=n)&&(j!=1)&&(j!=n)){
                if(CONDITION_1 && CONDITION_2){
                    a[i][j]='X';
                }
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
