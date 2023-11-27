#include <iostream>
using namespace std;
int main(){
    int t,n,i,a,b,as,bs;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        a=0;
        b=0;
        as=1;
        bs=0;
        for(i=0;i<n;i++){
            if (s[i]=='A'){
                if(as==1){
                    a++;
                }
                else{
                    as=1;
                    bs=0;
                }
            }
            else{
                if(bs==1){
                    b++;
                }
                else{
                    bs=1;
                    as=0;
                } 
            }
        }
        cout<<a<<" "<<b<<endl;


    }
    return 0;
}