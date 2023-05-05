#include<iostream>
  using namespace std;
  int main(){
      int sum;
      int n;
      cin>> n;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      for(int i=0;i<n;i++){
          sum+=a[i];
      }
      cout<< sum;
  }
