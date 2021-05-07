// Problem Link: https://www.hackerrank.com/challenges/js10-function/problem

/*
 * Create the function factorial here
 */

var dp = [];

function factorial(n){
    dp[0] = 1;
    dp[1] = 1;
    
    for(var i = 2;i<100;i++){
        dp[i] = i * dp[i-1];
    }
    
    return dp[n];
}
