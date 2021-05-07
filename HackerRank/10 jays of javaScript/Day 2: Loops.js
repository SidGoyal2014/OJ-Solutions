// Problem Link: https://www.hackerrank.com/challenges/js10-loops/problem

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    
    var vowels = [];
    var conso = [];
    
    var i = 0;
    
    for(i = 0;i<s.length;i++){
        
        if(isVowel(s[i])){
            vowels.push(s[i]);
        }
        else{
            conso.push(s[i]);
        }
    }
    
    function isVowel(x){
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
            return true;
        }
        return false;
    }
    
    for(i=0;i<vowels.length;i++){
        console.log(vowels[i]);
    }
    for(i=0;i<conso.length;i++){
        console.log(conso[i]);
    }
}
