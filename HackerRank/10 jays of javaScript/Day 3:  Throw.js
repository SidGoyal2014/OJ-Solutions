// Problem Link: https://www.hackerrank.com/challenges/js10-throw/problem

/*
 * Complete the isPositive function.
 * If 'a' is positive, return "YES".
 * If 'a' is 0, throw an Error with the message "Zero Error"
 * If 'a' is negative, throw an Error with the message "Negative Error"
 */

function isPositive(a) {
    try{
        throwError(a);
    }
    catch(e){
        return (e.message);
        // console.log(e.message);
    }
}

function throwError(a){
    
    if(a > 0){
        throw new Error("YES");
    }
    else if(a == 0){
        throw new Error("Zero Error");
    }
    else{
        throw new Error("Negative Error");
    }
}
