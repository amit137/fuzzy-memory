#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
float amount(float principal,int time=2,float rate=0.08);
int main()
{
    cout<<amount(3000)<<"\n";
    cout<<amount(3000,3)<<"\n";
    cout<<amount(3000,4,1)<<"\n";
   
}

float amount(float p,int t,float r){
   float x;
   x=(p*r*t)/100;
   return x;
}
