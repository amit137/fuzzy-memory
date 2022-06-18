#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5};
    v.push_back(6);
    cout<<"Size of the vector is "<<v.size()<<endl;
    cout<<"Capactiy of the vector is "<<v.capacity()<<endl;
    cout<<"Max size of the vector is "<<v.max_size()<<endl;
    cout<<"Shrink to fit "<<endl;
    v.shrink_to_fit();
    for(auto i=v.begin();i<v.end();i++)
    cout<<*i<<" ";
    
}