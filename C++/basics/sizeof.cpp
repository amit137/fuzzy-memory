#include<iostream>
using namespace std;
int main()
{
    int myInt=1;
    float myFloat=1.345;
    long myLong=7466;
    double myDouble=9939848;
    char myChar='z';
    bool myBool=true;
    
    cout<<"All these sizes are in bytes"<<endl;
    cout<<"Size of int is "<<sizeof(myInt)<<endl;
    cout<<"Size of float is "<<sizeof(myFloat)<<endl;
    cout<<"Size of long is "<<sizeof(myLong)<<endl;
    cout<<"Size of double is "<<sizeof(myDouble)<<endl;
    cout<<"Size of char is "<<sizeof(myChar)<<endl;
    cout<<"Size of bool is "<<sizeof(myBool)<<endl;

  return 0;
}