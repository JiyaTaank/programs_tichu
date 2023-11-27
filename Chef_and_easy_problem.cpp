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
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                }
            }
        }
        int s=0;
        for(int i=0;i<n;i+=2){
            s=s+arr[i];
        }
        cout<<s<<endl;
         
    }
    return 0;
}