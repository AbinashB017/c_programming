#include<iostream>
using namespace std;

int main(){
      int a,b;
      cout<<"enter a:"<<endl<<"enter b:";
      cin>>a>>b;
      int temp=a;
      a=b;
      b=temp;
      cout<<a<<endl<<b;
}