#include <iostream>

using namespace std;

void swap(int*,int*);

int main(){
    int n,arr[1000],arr1[1000]={0},i,j,max;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(j=0;j<n;j++){
        for(i=0;i<(n-1);i++){
            if(arr[i]<arr[i+1]){
                swap(&arr[i],&arr[i+1]);
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((arr[j]==(arr[i]+1))||(arr[j]==(arr[i]))){
                arr1[i]++;
            }
        }
    }

    max = arr1[0];
    for(i=0;i<n;i++){
        if(max<arr1[i]){
            max=arr1[i];
        }
    }

    cout<<max;
    return 0;
}
void swap(int *a,int *b){
    *a=*a+(*b);
    *b=*a-(*b);
    *a=*a-(*b);
}
