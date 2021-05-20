// Problem Name: CamelCase
// Problem Link: https://www.hackerrank.com/challenges/camelcase/problem

///////////// SOLUTION //////////////

#include <iostream>
using namespace std;

int main(){
    string sent;
    cin>>sent;

    int i,count=0;
    short int j;

    i=0;
    while(sent[i]!='\0'){
        for(j=65;j<=90;j++){
            if(sent[i]==j){
                count++;
                break;
            }
        }
        i++;
    }
    cout<<(count+1);
    return 0;
}
