#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
    cout<<"AND "<<(a&b)<<endl;
    cout<<"OR "<<(a|b)<<endl;
    cout<<"NOT " <<(~a)<<endl;
    cout<<"XOR "<<(a^b)<<endl;
   
    cout<<"Right Shift "<<endl;
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<"Left Shift "<<endl;
    cout<<(21<<1)<<endl;
    cout<<(21<<2)<<endl;

    int i=7;
    cout<<(++i)<<endl;//8
    cout<<(i++)<<endl;//8
    cout<<(i--)<<endl;//9
    cout<<(--i)<<endl;//7


  
}