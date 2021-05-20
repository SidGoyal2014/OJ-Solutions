// Problem Name: Alternating Characters
// Problem Link: https://www.hackerrank.com/challenges/alternating-characters/problem

//////////////// SOLUTION //////////////////

#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int n = s.length();
    int count=0;
    int i=0;
    while(i<n){
    // for(int i=0;i<n;i++){
        if(s[i] == s[i+1]){
            count++;
        }
        i++;
    }

    return (count);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
