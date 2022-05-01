#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
int main()
{
    vector<int>values={1,2,3,4,5};
    #if 0
    cout<<"First Way "<<endl;
    for(int i=0;i<values.size();i++){
        cout<<values[i]<<endl;
    }

    cout<<"Second Way"<<endl;
    for(int value:values){
        cout<<value<<endl;
    }

    cout<<"Using iterator"<<endl;
    for(vector<int>::iterator it=values.begin();it!=values.end();it++){
        cout<<*it<<endl;
    }
   //use iterator for data structures like map or tree or list
    
    #endif
  
    cout<<"One Way to iterate over map "<<endl;
    using ScoreMap= unordered_map<string,int>;//typedef
    ScoreMap map;
    map["Amit"]=137;
    map["Sumit"]=1211;
    //we cannot use for loop,because it has keys and not indices,so using iterator for this

    for(ScoreMap::const_iterator it=map.begin();
    it!=map.end();it++){
        auto& key=it->first; // using &,so we only get reference and are not actually copying the value
        auto& value=it->second;
        
        cout<<key<<" = "<<value<<endl;
    }
   
    cout<<"Another Way to iterate over map "<<endl;
    for(auto kv:map){

        auto& key=kv.first;
        auto& value=kv.second;
        cout<<key<<" = "<<value<<endl;
    }
    
    #if 0
    cout<<"In C++17, we have an even newer way to iterate "<<endl;
    for(auto[key,value]:map){
        cout<<key<<" = "<<value<<endl;
    }
    #endif
    
    // cin.get();
}