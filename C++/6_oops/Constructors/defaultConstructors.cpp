#include<iostream>
#include<stdlib.h>
using namespace std;
class Test{
    int a; char b;
    public:
    Test(){
        cout<<"This is the Default Constructor\n";
        cout<<"If no argumnets are passed,then this is called\n";
    }
    Test(int i,char j){
        a=i;
        b=j;
        cout<<"Constructor with arguments\n";
        cout<<a<<" "<<b<<"\n";
    }

};

int main()
{
    Test tArray[5];//the default contructor will be called five times in this case
    Test ob(137,'a');//this one is with arguments
}