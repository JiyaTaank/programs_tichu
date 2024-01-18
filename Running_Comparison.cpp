#include <iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int A[n];
        int B[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        int c=0;
        for(int i=0;i<n;i++){
          if(B[i]<=2*A[i] && A[i]<=2*B[i])
            c++;
             }
        cout<<c<<endl;

    }
    return 0;
}