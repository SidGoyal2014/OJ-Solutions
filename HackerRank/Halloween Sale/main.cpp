#include <iostream>
using namespace std;
int main(){
    int p,d,m,s,count;
    cin>>p>>d>>m>>s;
    
    count=0;
    while(s!=0){
        if(p>m){
            s=s-p;
            if(s>=0){
                count++;
            }
            else{
                break;
            }    
        }
        else{
            s=s-m;
            if(s>=0){
                count++;
            }
            else{
                break;
            }    
        }
        p=p-d;
    }
    cout<<count;
    return 0;
}
