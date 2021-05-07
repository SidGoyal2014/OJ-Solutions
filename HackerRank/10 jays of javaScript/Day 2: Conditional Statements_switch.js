// Problem Link: https://www.hackerrank.com/challenges/js10-switch/submissions/code/212162873

function getLetter(s) {
    let letter;
    // Write your code here
    
    switch(true){
        case(s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u'):
            letter = 'A';
            break;
        case(s[0] == 'b' || s[0] == 'c' || s[0] == 'd' || s[0] == 'f' || s[0] == 'g'):
            letter = 'B';
            break;
        case(s[0] == 'h' || s[0] == 'j' || s[0] == 'k' || s[0] == 'l' || s[0] == 'm'):
            letter = 'C';
            break;
        default:
            letter = 'D';
            break;
    }
    
    return letter;
}
