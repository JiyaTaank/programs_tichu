# include <iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for( int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mx1=0;
        for( int i=1;i<n;i++){
          mx1=max(arr[i],arr[i-1]);  
        }
        int mx2=0;
        for( int i=0;i<n;i++){
           if(arr[i]>mx2 && arr[i]!=mx1){
            mx2=arr[i];
           }
          
          }
          cout<<mx1+mx2<<endl;
        }
        
    return 0;
}
