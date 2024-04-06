#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"enter the numbe rof elemnets"<<endl;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }
      int odd=0,even=0;
      for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                  even=even+arr[i];
            }
            else{
                  odd=odd+arr[i];
            }
      }
      cout<<"the sum of even no is "<<even<<endl;
      cout<<"the sum of odd no is "<<odd<<endl;

}