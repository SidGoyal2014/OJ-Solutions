// Problem Name: Mini-Max Sum
// Problem Link: https://www.hackerrank.com/challenges/mini-max-sum/problem

/////////// SOLUTION /////////////

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
    unsigned long long int arr[5],k,s1,s2;
    int i,j;
    for(i=0;i<5;i++)
    {
        scanf("%llu",&arr[i]);
    }
    j=arr[0];
    for(i=1;i<5;i++)
    {
        if(j>arr[i])
        {
            j=arr[i];
        }
    }
    k=arr[0];
    for(i=1;i<5;i++)
    {
        if(k<arr[i])
        {
            k=arr[i];
        }
    }
    for(i=0;i<5;i++)
    {
        s1=s1+arr[i];
    }
    s1=s1-j;
    for(i=0;i<5;i++)
    {
        s2=s2+arr[i];
    }
    s2=s2-k;
  
    printf("%llu%c%llu",s2,32,s1);
  
    return 0;
}
