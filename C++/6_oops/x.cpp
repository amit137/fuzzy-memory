#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
float area(float a,float  b,float c);
int main()
{
    cout<<area(3,4,5)<<"\n";
    cout<<area(4,3)<<"\n";
    cout<<area(2)<<"\n";
}

float area(float x,float y,float z){
    float s,ar;
    s=(x+y+z)/2;
    ar=sqrt(s*(s-x)*(s-y)*(s-z));
    cout<<"Area of Triangle\n";
    return ar;
}

float area(float a,float b){
    cout<<"Area of Rectangle\n";
    return a*b;
}

float area(float r){
    cout<<"Area of circle\n";
    return 3.14*r*r;
}