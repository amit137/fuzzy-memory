#include<bits/stdc++.h>
using namespace std;
int main()
{
    //we can make pair of any two data types,even of containers
    pair<int,string>p;
    p=make_pair(2,"abc");
    cout<<p.first<<" "<<p.second<<endl;
    
    pair<int,double>p1;
    p1={4,3.1456};
    cout<<p1.first<<" "<<p1.second<<endl;
}