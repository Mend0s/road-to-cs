#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b=0,s=0;
    if(n<1000){
        if(n/100){
            b=n/100;
            for(int i=0;i<b;i++) cout<<"B";
        }
        /*
        cout<<endl;
        cout<<b;
        cout<<endl��
		*/ 
        if(n/10){
          s=(n-b*100)/10;
          for(int i=0;i<s;i++) cout<<"S";
    }
        
          int x=n-b*100-s*10;
            for(int i=0;i<x;i++) cout<<i+1;
        
    }
    return 0;
}