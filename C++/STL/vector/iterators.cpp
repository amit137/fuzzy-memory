#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>v1{1,2,3,4,5};
  
  cout<<"Accessing elements without using vectors"<<endl;
  for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
  }
  cout<<endl;
  
  cout<<"Accessing elements with use of iterators"<<endl;
  for(auto i=v1.begin();i!=v1.end();i++)
  cout<<*i<<" ";

  cout<<"\nDefining the iterator\n";
  vector<int>:: iterator it;
  for(it=v1.begin();it!=v1.end();it++)
  cout<<*it<<" ";

  cout<<"\nIterators allows us to dynamically insert values at different positions\n";
  vector<int>v2{10,20,30,40,50};

  vector<int>:: iterator it2=v2.begin();
  v2.insert(it+1,70);
  for(int i=0;i<v2.size();i++)
  cout<<v2[i]<<" ";
  cout<<v2.front()<<" ";

  cout<<"\nUsing rbegin and rend\n";
  vector<string>s1{"Amit","Sumit","Ankita"};
  for(auto i=s1.rbegin();i!=s1.rend();i++)
  cout<<*i<<" ";


  cout<<"\nUsing cbegin and cend\n";
  vector<double>v3{10,200.3,5.678788};
  for(auto i=v3.cbegin();i!=v3.cend();i++)
  cout<<*i<<" ";


  cout<<"\nUsing crbegin and crend\n";
  for(auto i=v3.crbegin();i!=v3.crend();i++)
  cout<<*i<<" ";


  return 0;
}