#include<iostream>
using namespace std;
int main()
{
    int a='a';
    cout<<a<<endl;
    char ch=98;
    cout<<ch<<endl;
    char ch1=123456;
    cout<<ch1<<endl;//@ 

    unsigned int c=112;
    unsigned int d=-112;
    cout<<c<<endl;
    cout<<d<<endl;

    // int/int=int
    // float/int=float
    // double/int=double


    int e=2.0/5;
    cout<<e<<endl;//0.4 but stored in an e which is int,so answer will be int too,i.e. 0
    cout<<2.0/5<<endl;//0.4
    float f=2.0/5;
    cout<<f<<endl;//0.4,stays in float


    int m=2;
    int n=3;
    bool isEqual=(m==n);
    cout<<isEqual<<endl;//0



    return 0;
}