// Problem Name: Birthday Candles
// Problem Link: https://www.hackerrank.com/challenges/birthday-cake-candles/problem

////////////// SOLUTION ///////////////

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    unsigned long long int arr[100000],n,i,j,count=0;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&arr[i]);
    }
    j=arr[0];
    for(i=1;i<n;i++)
    {
        if(j<arr[i])
        {
            j=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==j)
        {
            count=count+1;
        }
    }
    printf("%llu",count);
    return 0;
}
