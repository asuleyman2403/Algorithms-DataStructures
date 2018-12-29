#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,min1,min2,indm;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    min1=a[0];
    indm=0;
    for(int i=1;i<n;i++){
        if(a[i]<min1){
            min1=a[i];
            indm=i;
        }
    }
    if(min1==a[0]&&indm==0){
        min2=a[1];
        for(int i=1;i<n;i++){
           if(i!=indm&&a[i]<min2){ 
           min2=a[i];
           }
        }
    }
    else{
        min2=a[0];
        for(int i=0;i<indm;i++){
         if(min2>a[i]){
            min2=a[i];
         }
        }
        for(int i=indm+1;i<n;i++){
         if(min2>a[i]){
            min2=a[i];
         }
        }
    }
    cout<<min1<<" "<<min2;
 
 
 
    return 0;
}
