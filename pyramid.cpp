#include<iostream>
using namespace std;
int main(){
      int i,j,k,n;
      cout<<"enter the numvber of rows";
      cin>>n;
      for(i=0;i<n;i++){
            for(k=0;k<n-i;k++){
                  cout<<" ";
            }
            for(j=0;j<2*i-i;j++){
                  cout<<" *";
            }
            cout<<"\n";
      }
      
}