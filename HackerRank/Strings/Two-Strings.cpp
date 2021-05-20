// Problem Name: Two Strings
// Problem Link: https://www.hackerrank.com/challenges/two-strings/problem

/////////////// SOLUTION //////////////////

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s1,s2;
        map<char,int> m;
        bool flag = false;

        cin>>s1;
        cin>>s2;
        

        for(auto x:s1){
            m[x]++;
        }

        for(auto x:s2){
            if(m[x] > 0){
                flag = true;
                cout<<"YES"<<endl;
                break;
            }
        }

        if(flag == false){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
