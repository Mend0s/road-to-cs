#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rl;
    cin>>rl;
    int a[100];int b[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    
    for(int i=0;i<n;i++){
        b[(i+rl)%n]=a[i];
        //b[i]=a[(i+n-rl)%n]则部分不对 ，还没有看出为什么 
    }
    for(int i=0;i<n-1;i++){
        cout<<b[i]<<" ";
    }
    cout<<b[n-1];
    return 0;
}
