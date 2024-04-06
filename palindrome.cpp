#include<iostream>
using namespace std;

int main(){
      int r,n,sum=0;
      cout<<"enter the number:";
      cin>>n;
      int temp=n;
      while(n>0){
            r=n%10;
            sum=(sum*10)+r;
            n=n/10;
      }
      if(temp==sum){
            cout<<"palindrome";
      }
      else{
            cout<<"not palindrome";
      }
}