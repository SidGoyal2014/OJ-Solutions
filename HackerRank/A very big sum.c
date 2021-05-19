// Problem Name: A very big sum
// Problem Link: https://www.hackerrank.com/challenges/a-very-big-sum/problem

////////// SOLUTION /////////

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
    int n,i;
    unsigned long long int arr[10],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%llu",sum);
    return 0;
}
