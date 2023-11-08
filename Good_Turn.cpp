#include <iostream>
using namespace std;
int main(){
    int T,x,y;
    cin>>T;
    for(T=T;T>0;T--){
        cin>>x>>y;
        if((x+y)>6){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}