#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5};
    cout<<"Element at a particular index using at "<<v.at(3)<<endl;
    cout<<"Element  at a particular index using reference operator "<<v[3]<<endl;
    cout<<"The first element is "<<v.front()<<endl;
    cout<<"The last element is "<<v.back()<<endl;
    cout<<"The pointer to the memory array used internally by the vector is "<<v.data()<<endl;
}