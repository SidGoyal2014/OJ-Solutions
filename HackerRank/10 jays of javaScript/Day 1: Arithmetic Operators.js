// Problem Link: https://www.hackerrank.com/challenges/js10-arithmetic-operators/problem

/**
*   Calculate the area of a rectangle.
*
*   length: The length of the rectangle.
*   width: The width of the rectangle.
*   
*	Return a number denoting the rectangle's area.
**/

function getArea(length, width) {
    let area;
    
    area = length * width;
    // Write your code here
    
    return area;
}

/**
*   Calculate the perimeter of a rectangle.
*	
*	length: The length of the rectangle.
*   width: The width of the rectangle.
*   
*	Return a number denoting the perimeter of a rectangle.
**/

function getPerimeter(length, width) {
    let perimeter;
    // Write your code here
    
    perimeter = 2 * (length + width);
    
    return perimeter;
}
