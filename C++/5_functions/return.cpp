#include<iostream>
typedef unsigned long int uli;

uli Double(uli);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    uli x;
    cout<<"to return double of a number"<<endl;
    cout<<"Enter the number you want double of"<<endl;
    cin>>x;
    uli doubleOfNumber;
    doubleOfNumber=Double(x);
    cout<<doubleOfNumber;
    return 0;
}

uli Double(uli x){
     if(x<=10000)
     return x*2;
     return -1;
}