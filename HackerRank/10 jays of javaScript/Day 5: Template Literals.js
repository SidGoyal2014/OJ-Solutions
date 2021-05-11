// Problem Link: https://www.hackerrank.com/challenges/js10-template-literals/problem

/*
 * Determine the original side lengths and return an array:
 * - The first element is the length of the shorter side
 * - The second element is the length of the longer side
 * 
 * Parameter(s):
 * literals: The tagged template literal's array of strings.
 * expressions: The tagged template literal's array of expression values (i.e., [area, perimeter]).
 */
function sides(literals, ...expressions) {
    
    var sol = []
    
    // console.log(expressions[0]);
    // console.log(expressions[1]);
    
    var s1 = expressions[1] + Math.sqrt((expressions[1] * expressions[1]) - (16 * expressions[0]));
    
    s1 = s1 / 4;
    
    var s2 = expressions[1] - Math.sqrt((expressions[1] * expressions[1]) - (16 * expressions[0]));
    
    s2 = s2 / 4;
    
    if(s1 <= s2){
        sol[0] = s1;
        sol[1] = s2;
    }
    else{
        sol[0] = s2;
        sol[1] = s1;
    }
    
    return sol;
}
