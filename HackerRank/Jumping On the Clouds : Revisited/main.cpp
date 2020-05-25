#include <iostream.h>
using namespace std;

int main() { 
    int n,k,ar[27],energy = 100;
    cin >> n >> k;
    for(int i = 0; i < n; i++)cin >> ar[i];
    for(int i = 0; i < n; i+=k)energy-=(1+2*ar[i]);
    cout << energy << endl;
    return 0;
}
