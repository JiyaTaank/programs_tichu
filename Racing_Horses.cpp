#include <iostream>
# include <climits>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mindif=INT_MAX,x=0;
        for(int i=0;i<n;i++){
            for( int j=i+1;j<n;j++){

                x=max(a[i],a[j])-min(a[i],a[j]);
                mindif=min(mindif,x);    
        }
        }
        cout<<mindif<<endl;

    }
    return 0;
}