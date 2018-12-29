#include <iostream>
using namespace std;
int main(){
   int n,mx,mx1,min,delta;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   mx=-1;
   for(int i=0;i<n;i++){
    if(a[i]>mx){
        mx=a[i];
    }
   }
   min=a[0];
   for(int i=1;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
   }
   delta=mx-min;
   for(int i=0;i<n;i++){
    if((delta>mx-a[i])&&(mx-a[i])!=0){
        delta=mx-a[i];
    }
   }
   cout<<mx-delta<<endl;
 
 
 
 
 
 
 
    return 0;
}