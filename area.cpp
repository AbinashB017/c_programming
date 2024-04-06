#include<iostream>
#include<math.h>
using namespace std;
int main(){
      float a,b,c,s;
      cout<<"enter the sides:"<<endl;
      cin>>a>>b>>c;
      s=(a+b+c)/2;
      float area= sqrt(s*(s-a)*(s-b)*(s-c));
      cout<<area;
      


}