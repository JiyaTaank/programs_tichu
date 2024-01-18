#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int c=1,r=0,n,i;
  bool fact=true,prim=true;
  
  cin>>n;
  while(n!=0 || (fact==true && prim==true)){
    for(int j=2;j<=n/2;j++){
      
      if(n%j==0){
        
     for(int i=2;i<=j/2;i++){
        if(j%i==0){
          prim=false;
          break;
    }
     }
  }
  else
  fact=false;
  if(prim==true){
    n=n-j;
    if(c==1){
      c=0;
      r=1;
    }
    else{
      c=1;
      r=0;
    }

  }
 
    }
  }
  if(c==1){
    cout<<" roma"<<endl;
  }
  else{
    cout<<" chef"<<endl;
  }
}
return 0;
}