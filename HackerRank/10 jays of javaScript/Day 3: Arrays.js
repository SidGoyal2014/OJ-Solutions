// Problem Link: https://www.hackerrank.com/challenges/js10-arrays/problem

/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    // Complete the function
    
    var largest = 0;
    var secondLargest = 0;
    
    if(nums[1] > nums[0]){
        largest = nums[1];
        secondLargest = nums[0];
    }
    else{
        largest = nums[0];
        secondLargest = nums[1];
    }
    
    for(var i=2;i<nums.length;i++){
        if(nums[i] > largest){
            secondLargest = largest;
            largest = nums[i];
        }
        else if((nums[i] < largest) && (nums[i] > secondLargest)){
            secondLargest = nums[i];
        }
    }
    
    return secondLargest;
}
