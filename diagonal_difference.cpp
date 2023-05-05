#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,sum=0,sum1=0;
    cin>> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i){
                sum+=a[i][j];
            }}}
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
          if(j+i==(n-1)){
                sum1+=a[i][j];
            }
        }
}
    cout<< abs(sum1-sum);

}
