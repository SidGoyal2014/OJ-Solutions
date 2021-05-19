// Problem Name: Diagonal Difference
// Problem Link: https://www.hackerrank.com/challenges/diagonal-difference/problem

///////// SOLUTION //////////

#include <iostream>
using namespace std;
int main()
{
    int arr[100][100],s1,s2,i,j,n,diff;
    cin>>n;
    s1=0;
    s2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }    
    for(i=0;i<n;i++)
    {
        s1 = s1 + arr[i][i];
    }
    for(i=0;i<n;i++)
    {
        s2 = s2 + arr[i][n-1-i];
    }
    diff=s1-s2;
    cout<<abs(diff);
  
    return 0;
}
