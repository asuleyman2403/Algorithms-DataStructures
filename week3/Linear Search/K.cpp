#include <iostream>
using namespace std;
int main(){
    int n,min,mx;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    mx=min;
    for(int i=0;i<n;i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==mx){
            a[i]=min;
        }
        cout<<a[i]<<" ";
    }
 
 
    return 0;
}