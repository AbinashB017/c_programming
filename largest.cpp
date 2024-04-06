#include<iostream>
using namespace std;

int main(){
      int x,y,z;
      cout<<"enter the numbers:\n";
      cin>>x>>y>>z;
      if(x>y && x>z){
            cout<<x<<" is the largest";
      }
      else if(z>y && z>x){
            cout<<z<<" is the largest";
      }
      else
            cout<<y<<" is the largest";
      

}