#include<iostream>
using namespace std;

int main(){
      int n1,n2;
      cout<<"enter the size of array 1:";
      cin>>n1;
      cout<<"enter the size of array 2:";
      cin>>n2;
      int arr1[n1];
      int arr2[n2];
      for(int i=0;i<n1;i++){
            cin>>arr1[i];
      }
      for(int i=0;i<n2;i++){
            cin>>arr2[i];
      }
      if(n1==n2){
            for(int i=0;i<n1;i++){
                  if(arr1[i]==arr2[i]){
                        cout<<"arrays are equal";
                  }
                  else{
                        cout<<"arrays are not equal";
                  }
            }
      }
      else{
            cout<<"arrays are not equal";
      }

}