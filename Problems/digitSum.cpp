#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int s=0;
    while(x>0){
    int r=x%10;
    s+=r;
    x=x/10;
    }
    cout<<s<<endl;
    return 0;
}