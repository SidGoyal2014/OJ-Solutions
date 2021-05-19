// Problem Name: Compare the triplets
// Problem Link: https://www.hackerrank.com/challenges/compare-the-triplets/problem

////// SOLUTION ///////

#include <assert.h>
#include <ctype.h>
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
    int arr[100],arr1[100],i,a,b;
    a=0;
    b=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<3;i++)
    {
        if(arr[i]<arr1[i])
        {
            b++;
        }
        if(arr[i]>arr1[i])
        {
            a++;
        }
    }

    printf("%d%c%d",a,32,b);
    return 0;
}
