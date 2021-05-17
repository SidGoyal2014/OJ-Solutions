// Problem Link: https://www.hackerrank.com/challenges/js10-arrows/problem

/*
 * Modify and return the array so that all even elements are doubled and all odd elements are tripled.
 * 
 * Parameter(s):
 * nums: An array of numbers.
 */
function modifyArray(nums) {
    
    var arr = nums.map(a => (a%2 == 0 ? a*2 : a*3));
    
    return arr;
}
