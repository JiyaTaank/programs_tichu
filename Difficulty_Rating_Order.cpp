#include <iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                a++;
                cout<<"No"<<endl;
                break;
            }
            
        }
        if(a==0){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
    
}
