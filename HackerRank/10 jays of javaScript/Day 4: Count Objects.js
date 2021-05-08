// Problem Link: https://www.hackerrank.com/challenges/js10-count-objects/problem

/*
 * Return a count of the total number of objects 'o' satisfying o.x == o.y.
 * 
 * Parameter(s):
 * objects: an array of objects with integer properties 'x' and 'y'
*/

function getCount(objects) {
    var n = objects.length;
    var cnt = 0;
    
    for(var i=0;i<n;i++){
        if(objects[i].x == objects[i].y){
            cnt = cnt + 1;
        }
    }
    
    return cnt;
}
