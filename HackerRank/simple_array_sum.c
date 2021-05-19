// Problem Name: Simple Array Sum
// Problem Link: https://www.hackerrank.com/challenges/simple-array-sum/problem

#include <stdio.h>
main()
{
    int i,n;
    int arr[10000];
    int sum;
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
