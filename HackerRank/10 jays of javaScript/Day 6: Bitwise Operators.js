// Problem Link: https://www.hackerrank.com/challenges/js10-bitwise/problem

function getMaxLessThanK(n,k){
    var sol = -349832;
    
    for(var i=1;i<=(n-1);i++){
        for(var j=i+1;j<=n;j++){
            // console.log("i : ",i," j : ",j," ",(i & j));
            if(((i & j) > sol) && ((i & j) < k)){
                sol = (i & j);
            }
        }
    }
    
    return sol;
}
