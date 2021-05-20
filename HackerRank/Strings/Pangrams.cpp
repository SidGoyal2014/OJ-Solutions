// Problem Name: Pangrams
// Problem Link: https://www.hackerrank.com/challenges/pangrams/problem

/////////////// SOLUTION //////////////////

#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    char b,c;
    int k,l[10000]={0},count=0,i,j;

    getline(cin,a);

    for(i=65,j=97,k=0;i<=90&&j<=122;i++,j++){
        b=i;
        c=j;
        for(k=0;a[k]!='\0';k++){
            if((a[k]==b)||a[k]==c){
                l[i]=1;
                count++;
                break;
            }
        }
        if(l[i]!=1){
         cout<<"not pangram";
            break;
        }
    }
    if(count==26){
        cout<<"pangram";
    }
    return 0;
}
