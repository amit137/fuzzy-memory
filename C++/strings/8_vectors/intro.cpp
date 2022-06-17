#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main()
{
   vector<int>v1;//has no elements
   vector<string>v2;//no elementts
   for(auto i:v1){
       cout<<i;
   }

   //list initializing
   vector<int>v3={1,2,3,4,5,6};
   for(auto i:v3){
       cout<<i<<" ";
   }
   cout<<endl;
   vector<string>animals={"lion","tiger","dog","cat"};
   for(auto c:animals){
       cout<<c<<" ";
   }

   vector<string>birds(10,"hawk");
   for(auto b:birds){
       cout<<b<<" ";
   }
}