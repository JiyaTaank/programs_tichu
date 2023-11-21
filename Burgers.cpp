#include <iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t;
    for(t=t;t>0;t--){
        cin>>x >>y;
        if(x<y){
            cout<<x<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }
    return 0;
}