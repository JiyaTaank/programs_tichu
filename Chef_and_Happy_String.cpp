#include<iostream>
#include <string>
using namespace std;
int main(){
    int t,a=0;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
                for( int n=i;n<i+3;n++){
                    if(s[n]=='a'|| s[n]=='e'|| s[n]=='i'|| s[n]=='o'|| s[n]=='u'){
                       a++;
                    }
                }
                if(a==3)
                break;
                else{
                    a=0;
                }
            }
        }
        if(a==3){
            cout<<"Happy\n";
        }
        else
        cout<<"Sad\n";
    }
    return 0;
}