// Problem Link: https://www.hackerrank.com/challenges/js10-objects/problem

/*
 * Complete the Rectangle function
 */

function Rectangle(a, b) {
    
    function rect(a,b){
        this.length = a;
        this.width = b;
        
        this.perimeter = 2 * (a + b);
        this.area = a * b;
    }
    
    var obj = new rect(a,b);
    return obj;
}
