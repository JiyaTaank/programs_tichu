#include <iostream>
using namespace std;
int main(){
    int t,x,y,a;
    cin>>t;
    for(t=t;t>0;t--){
        cin>>x>>y>>a;
        if(y>a && x<=a){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;

}