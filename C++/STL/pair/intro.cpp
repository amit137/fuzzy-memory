#include<bits/stdc++.h>
using namespace std;
int main()
{
    //initializing
    pair<int,string>p1;
    p1.first=100;
    p1.second="abc";
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,string>p2;
    p2=make_pair(4,"amit");
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int,double>p3;
    p3={6,3.2123};
    cout<<p3.first<<" "<<p3.second<<endl;

    pair<char,float>p4;
    cin>>p4.first>>p4.second;
    cout<<p4.first<<" "<<p4.second<<endl;
    
    //swapping
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    
    cout<<"Before Swapping"<<endl;
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0],p_array[2]);
    cout<<"After Swapping"<<endl;
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    pair<char,int>pair1={'A',1};
    pair<char,int>pair2={'B',2};

    cout<<"Before Swapping"<<endl;
    cout<<pair1.first<<" "<<pair1.second<<endl;
    cout<<pair2.first<<" "<<pair2.second<<endl;
    pair1.swap(pair2);
    cout<<"After Swapping"<<endl;
    cout<<pair1.first<<" "<<pair1.second<<endl;
    cout<<pair2.first<<" "<<pair2.second<<endl;


    return 0;
}