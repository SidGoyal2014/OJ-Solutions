// Problem Name: Staircase
// Problem Link: https://www.hackerrank.com/challenges/staircase/problem

///////// SOLUTION //////////

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
