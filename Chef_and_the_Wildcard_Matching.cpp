#include <iostream>
#include <string>
using namespace std;
int main(){
   int t,x=0;
   string a,b;
   cin>>t;
   while(t--){
    cin>>a;
    cin>>b;
    for(int i=0;i<a.length();i++){
       if(a[i]=='?' && a[i]!=b[i])
         x++;
         }
    for(int i=0;i<a.length();i++){
       if(b[i]=='?' && a[i]!=b[i])
         x--;
         }
    if(x==0){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
   }
   
   return 0;
}


