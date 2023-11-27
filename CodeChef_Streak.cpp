#include <iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int om[n],ady[n];
        for( int i=0;i<n;i++){
            cin>>om[i];
        }
         for( int i=0;i<n;i++){
            cin>>ady[i];
        }
        int mxady=0, mxom=0,i=0,a=0;
         
        for(int i=0;i<n;i++){
            if( om[i]==0){
                if(a>mxom){
                    mxom=a;
                    
                }
                a=0;
            }
            else{
                a++;
            }
        }
        if(a>mxom){
            mxom=a;
        }
        
        
        a=0;
        for(int i=0;i<n;i++){
            if( ady[i]==0){
                if(a>mxady){
                    mxady=a;
                
                }
                a=0;
            }
            else{
                a++;
            }
        }
        if(a>mxady){
            mxady=a;
        }
        
        if(mxady>mxom){
            cout<<"Addy"<<endl;
        }
        else if(mxom>mxady){
            cout<<"Om"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }



    }
   return 0;
}