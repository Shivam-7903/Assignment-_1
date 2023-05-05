#include <bits/stdc++.h>

using namespace std;

int main(){
   int n=3;
    int  a[n],b[n],count=0,count1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            count+=1;
        }
        else if (a[i]<b[i]){
            count1+=1;
        }
        else{};
    }
    cout<<count<<" "<<count1;
 return 0 ;  
}
