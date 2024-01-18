#include <iostream>
#include <string>
using namespace std;
int main(){
    int t,n,i;
    string s;
    string a="";
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        for(i=0;i<n;i+=2){
            if(s[i]=='0' &&s[i+1]=='0'){
                a.push_back('A');
                
                }
            else if(s[i]=='0' &&s[i+1]=='1'){
                a.push_back('T');
                
                
                }
            else if(s[i]=='1' &&s[i+1]=='0'){
                a.push_back('C');
                
                
                }
            else if(s[i]=='1' && s[i+1]=='1'){
                a.push_back('G');
                
            
            }
            
        }
        cout<<a<<endl;
        a="";
        
    }
return 0;
}

