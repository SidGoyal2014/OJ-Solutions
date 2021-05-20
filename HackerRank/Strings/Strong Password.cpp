// Problem Name: Strong Password
// Problem Link: https://www.hackerrank.com/challenges/strong-password/problem

///////////// SOLUTION /////////////

#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong

    bool lowercase=false;
    bool uppercase=false;
    bool specialnum=false;
    bool sixdigit=false;

    int i,count=0;

    for(i=0;password[i]!='\0';i++){
        if(isupper(password[i])){
            uppercase=true;
        }
        if(islower(password[i])){
            lowercase=true;
        }
        if((int)password[i]>=33 && (int)password[i]<=45){
            specialnum=true;
        }
        if((int)password[i]>=48 && (int)password[i]<=57){
            sixdigit=true;
        }
    }


    if(lowercase==false){
        n++;
        count++;
    }
    if(uppercase==false){
        n++;
        count++;
    }
    if(specialnum==false){
        n++;
        count++;
    }
    if(sixdigit==false){
        n++;
        count++;
    }
    if(n<6){
        count=count+6-n;
    }

    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
