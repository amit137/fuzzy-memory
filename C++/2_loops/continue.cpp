#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++){
        if(i>2)
        continue;
        Log("Hello World");
        cout<<i<<endl;
    }
    cin.get();
}