#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>&v){ //passing reference only
    cout<<"Size of Vector is "<<v.size()<<endl; //it also has O(1) complexity
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{ 
    //initialization
    vector<int>v;
    vector<pair<int,int>>vp;

    //pushing values into vector
    int n;
    cin>>n;
    vector<int>v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x); //O(1) complexity-same as arrays
    }

    printVec(v1);

    vector<int>v2(5);
    printVec(v2);//0 0 0 0 0
    v2.push_back(7);
    printVec(v2);

    //we can also fill it with some value will initializing
    vector<int>v3(5,1);
    printVec(v3);//1 1 1 1 1 
    v3.pop_back();//pops last value
    printVec(v3);//1 1 1 1
    
    //we can directly copy vectors as well
    vector<int>v4=v3; //O(n)
    printVec(v4);
    
    vector<string>vs;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        vs.push_back(s);
    }
    for(int i=0;i<vs.size();i++){
        cout<<vs[i]<<" ";
    }
    cout<<endl;
    vs.clear();//clears the vector
    for(int i=0;i<vs.size();i++){
        cout<<vs[i]<<" ";
    }

    vector<int>v5(5,3);
    for(int i:v5){
        cout<<v5[i]<<" ";
    }

    cout<<"Sorting a Vector"<<endl;
    vector<int>v6{12,2,98,3,4,65};
    cout<<"Before Sorting"<<endl;
    for(auto i:v6){
        cout<<i<<" ";
    }
    sort(v6.begin(),v6.end());
    cout<<"\nAfter Sorting"<<endl;
    for(int i:v6){
        cout<<i<<" ";
    }

   
    vector<int>v7;
    v7.push_back(8);
    v7.push_back(1);
    v7.push_back(3);
    v7.push_back(6);
    v7.push_back(9);
    cout<<"Vector v7 is "<<endl;
    for(auto i:v7){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"\nReturning a reference to front and back of vector "<<endl;
    cout<<v7.front()<<" "<<v7.back()<<endl;
    cout<<"\nReturning a reference to a particular index using reference operator"<<endl;
    cout<<v7[3]<<endl;
    cout<<"Returning a reference to a particular index using at"<<endl;
    cout<<v7.at(3)<<endl;
    cout<<v7.at(0)<<endl;
   
    vector<int>v8;
    int r;
    cout<<"Enter size of this vector v8"<<endl;  cin>>r;
    cout<<"Enter vector elements"<<endl;
    for(int i=0;i<r;i++){
        int x;
        cin>>x;
        v8.push_back(x);
    }
    cout<<"We can also use iterators to print vector elements"<<endl;
    for(auto it=v8.begin();it!=v8.end();it++){
        cout<<*it<<" ";
    }
   
  return 0;
}