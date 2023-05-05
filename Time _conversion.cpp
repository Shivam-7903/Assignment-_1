#include <bits/stdc++.h>

using namespace std;

int main(){
    char a[10],A,P;
    for(int  i=0;i<=10;i++){
        cin>>a[i];
    }
    if(a[8]=='A')
        {
            if(a[0]=='1'&&a[1]=='2')
            {a[0]='0';
            a[1]='0';
            
        }
        
        }
    
    else if(a[8]=='P'){
        if(a[0]=='1'&&a[1]=='2'){
            a[0]='1';
            a[1]='2';
        }
        else{
        a[0]+=1;
        a[1]+=2;
        }
    }
    else{}
    
    for(int i=0;i<8;i++){
            cout<<a[i];
    }
}
