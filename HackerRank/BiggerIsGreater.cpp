// Problem Name: Bigger is Greater
// Problem Link: https://www.hackerrank.com/challenges/bigger-is-greater/problem

///////////// SOLUTION /////////////////

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s[100000];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s[i];
        bool val=next_permutation(s[i].begin(),s[i].end());
        if(val==true){
            cout<<s[i];
        } 
        else{
            cout<<"no answer";
        } 
        if(i<(n-1)){
            cout<<endl;
        }
    }
    return 0;
}
