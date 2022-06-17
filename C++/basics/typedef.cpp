#include<iostream>
typedef unsigned short int usi;
int main()
{
    using std::cout;
    using std::cin;
    usi width=5;
    usi length=10;
    usi area;
    area=width*length;
    cout<<area<<"\n";

    return 0;
}