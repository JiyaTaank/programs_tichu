#include <iostream>
using namespace std;
int main(){
    int t,x,n;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int A[n];
        int B[n];
        for(int i=0;i<n;i++){
            cin>>A[i];                   //freshness value
        }
        for(int i=0;i<n;i++){
            cin>>B[i];                   // cost
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(A[i]>=x){
                c=c+B[i];
            }
        }
        cout<<c<<endl;

    }
    return 0;
}