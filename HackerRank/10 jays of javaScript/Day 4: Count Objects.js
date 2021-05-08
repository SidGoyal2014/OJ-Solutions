// Problem Link: https://www.hackerrank.com/challenges/js10-count-objects/problem

/*
 * Implement a Polygon class with the following properties:
 * 1. A constructor that takes an array of integer side lengths.
 * 2. A 'perimeter' method that returns the sum of the Polygon's side lengths.
 */

class Polygon{
    constructor(arr){
        this.arr = arr;
    }
    
    perimeter(){
        var p = 0;
        for(var i=0;i<(this.arr).length;i++){
            p = p + (this.arr)[i];
        }
        return p;
    }
}
