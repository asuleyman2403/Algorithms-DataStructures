#include <iostream>
using namespace std;
int main(){
    int n,k=0,m;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
     cin>>a[i];
     }
     cin>>m;
     for(int i=0;i<n;i++){
        if(m==a[i]){
            cout<<i+1<<" ";
        }
    }
 
 
 
 
 
    return 0;
}