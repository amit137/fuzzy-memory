#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int fact=1;
    while(x>=1){
        fact*=x;
        x--;
    }
    cout<<fact<<endl;
}