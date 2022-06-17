#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4>a1;
    for(int i=0;i<4;i++){
        cin>>a1[i];
    }
    cout<<"Array a1 is "<<endl;
    for(int i=0;i<a1.size();i++){
        cout<<a1[i]<<" ";
    }
    cout<<endl;
    array<double,5>a2={11.11,12,35.5543,2,-1};
    cout<<"Array a2 is "<<endl;
    for(int i=0;i<a2.size();i++){
        cout<<a2[i]<<" ";
    }
    cout<<endl;
    //at to get value at a certain index,similar to []
    cout<<a2.at(3)<<endl;
    cout<<a2[3]<<endl;
    cout<<a2.front()<<endl;
    cout<<a2.back()<<endl;

    return 0;
}