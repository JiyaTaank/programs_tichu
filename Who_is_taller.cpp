#include <iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t;
    for(t=t;t>0;t--){
        cin>>x>>y;
        if(x>y){
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
    }
    return 0;
}