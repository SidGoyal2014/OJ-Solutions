// Problem Link: https://www.hackerrank.com/challenges/js10-arrows/problem

/*
 * Modify and return the array so that all even elements are doubled and all odd elements are tripled.
 * 
 * Parameter(s):
 * nums: An array of numbers.
 */
function modifyArray(nums) {

    var sol = []
    for(var i=0;i<nums.length;i++){
        if(nums[i] % 2 == 0){
            sol[i] = nums[i] * 2;
        }
        else{
            sol[i] = nums[i] * 3;
        }
    }
    
    return sol;
}
