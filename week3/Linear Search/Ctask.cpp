#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int n,m,t;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   cin>>m;
   t=abs(m-a[0]);
   int k=a[0];
   for(int i=1;i<n;i++){
     if(abs(a[i]-m)<t){
          t=abs(a[i]-m);
          k=a[i];
     }
   }
    cout<<k<<endl;
 
 
 
    return 0;
}