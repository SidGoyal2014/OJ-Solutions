// Problem Name: Plus Minus
// Problem Link: https://www.hackerrank.com/challenges/plus-minus/problem

//////////// SOLUTION ////////////

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n,i,c1,c2,c3;
    float s1,s2,s3;
    // c1 for negative numbers
    // c2 for negative numbers
    // c3 for zeroes 
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    c1=0;
    c2=0;
    c3=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            c1=c1+1;
        }
        if(arr[i]==0)
        {
            c2=c2+1;
        }
        if(arr[i]<0)
        {
            c3=c3+1;
        }
    }

    s1=(float)c1/(float)n;
    s2=(float)c2/(float)n;
    s3=(float)c3/(float)n;
  
    cout<<s1<<endl<<s3<<endl<<s2;
  
    return 0;
}
