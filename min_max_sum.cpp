#include <bits/stdc++.h>

using namespace std;
int main(){
   long long a[5],sum=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
        else if(a[i]<min){
            min=a[i];
        }
    }
    for(int i =0;i<5;i++){
        sum+=a[i];
    }
    cout<<(sum-max)<<" "<<(sum-min);
}
