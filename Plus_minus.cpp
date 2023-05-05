#include<iostream>
  using namespace std ;
  int main(){
      int n;
      long double count=0,count1=0,count2=0;
      cin>> n;
    long double a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
            }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            count+=1;
        }
        else if(a[i]<0){
            count1+=1;
        }
        else if(a[i]==0){
            count2+=1;
        }
    }   long double d=count/n;
         long double d1=count1/n;
         long double d2=count2/n;
         cout<<d<<"\n"<<d1<<"\n"<<d2;
    }
  
