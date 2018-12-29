#include<bits/stdc++.h>
using namespace std;
int n,a[100100],ps[100100];
int minx=999999,r=1,l=1;
int dif,k;
int main(){
    cin>>n;
    cin>>k;
    for (int i=1;i<=n;++i){
        cin>>a[i];
        ps[i]=ps[i-1]+a[i];
    }
    while (r<=n){
        dif=ps[r]-ps[l-1];
        if (dif>=k){
            minx = min(minx,r-l+1);
            l++;
        }
        else
        {
            r++;
        }
        
    }
    cout<<minx<<endl;
    
    
}