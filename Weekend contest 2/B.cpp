#include <iostream>
using namespace std;
int main(){
    int t;
    long x;
    cin>>t;
    while(t--){
        cin>>x;
        if(x%2!=0){cout<<(x-1)/2<<endl;}
        else{cout<<(x/2)-1<<endl;}
    }
    return 0;
}