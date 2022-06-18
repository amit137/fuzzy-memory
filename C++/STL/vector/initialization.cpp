#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Initializaton of Vectors"<<endl;

    cout<<"First way"<<endl;
    vector<int>v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    for(int i:v1)
    cout<<i<<" ";

    cout<<"Intializing vector of a fixed size"<<endl;
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    vector<int>v2(n,10);
    for(int i:v2)
    cout<<i<<" ";

    cout<<"\nInitializing like arrays"<<endl;
    vector<int>v3{10,20,30};
    for(auto i:v3)
    cout<<i<<" ";

    cout<<"\nInitialization from an array"<<endl;
    int a[]={10,20,30};
    int m=sizeof(a)/sizeof(a[0]);
    vector<int>v4(a,a+n);
    for(int k:v4)
    cout<<k<<" ";
    
    cout<<"\nInitialization from another vector\n";
    vector<int>v5{10,20,30};
    vector<int>v6(v5.begin(),v5.end());
    for(int j:v6)
    cout<<j<<" ";

    cout<<"\nInitializing all elements with a particular value\n";
    vector<int>v7(10);
    int value=9;
    fill(v7.begin(),v7.end(),value);
    for(int i:v7)
    cout<<" ";
}