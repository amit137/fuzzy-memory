#include<iostream>
#include<list>
using namespace std;
int main()
{
   list<int>l;
   cout<<"The size of the list is\n";
   cout<<l.size()<<endl;
   l.push_back(2);
   l.push_front(4);
   l.push_back(3);
   cout<<"\nThe list is\n";
   for(int i:l){
       cout<<i<<" ";
   }
   cout<<"The size of the list is\n"<<l.size()<<"\n";
   l.erase(l.begin());
   for(int i:l){
       cout<<i<<" ";
   }
   cout<<"\nAnother list is\n";
   list<int>n(5,100);
   for(int i:n){
       cout<<i<<" ";
   }
   
}