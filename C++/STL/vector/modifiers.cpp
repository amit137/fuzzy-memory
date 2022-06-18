#include<iostream>
#include<vector>
// using std::cout;
using namespace std;
#define rep(i,a)  for(auto i=a.begin();i<a.end();i++)              
int main()
{
    vector<int>v{10,20,30};
    cout<<"Inserting a new element at the last of the vector"<<endl;
    v.push_back(7);
    v.push_back(9);
    vector<int>::iterator i;
    rep(i,v)
    cout<<*i<<" ";

    cout<<"\nPopping element from the last of the vector"<<endl;
    v.pop_back();
    rep(i,v)
    cout<<*i<<" ";
   
   return 0;
}