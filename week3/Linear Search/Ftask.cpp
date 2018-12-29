#include <iostream>
using namespace std;
int main(){
    int n,k,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    k=a[0];
    m=1;
    for(int i=1;i<n;i++){
        if(a[i]>k){
            k=a[i];
            m=i+1;
        }
       
    }
    cout<<m<<endl;
 
 
 
    return 0;
}
