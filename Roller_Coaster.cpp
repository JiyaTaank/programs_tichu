#include <iostream>
using namespace std;
int main(){
    int t,x,h;
    cin>>t;
    for(t=t;t>0;t--){
        cin>>x>>h;
        if(x>=h){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}